import signal
import sys
import threading
import time

import numpy as np
from pylibfranka import (
    CartesianPose,
    CartesianVelocities,
    ControllerMode,
    Gripper,
    JointPositions,
    JointVelocities,
    RealtimeConfig,
    Robot,
    RobotState,
    Torques,
)


class FrankaControl:
    def __init__(self, robot_ip):
        print(f"Connecting to robot at {robot_ip}...")
        self.robot = Robot(robot_ip, RealtimeConfig.kIGNORE)
        self.gripper = Gripper(robot_ip)

        # 2. State & Thread Management
        self.last_robot_state = None
        self.active_control = None
        self.active_control_type = "idle"
        self.target_cmd = None
        self.running = True
        self.lock = threading.Lock()

        self._setup_collision_behavior()

        # 4. Start Control Thread
        self.control_thread = threading.Thread(
            target=self._main_control_loop, daemon=True
        )
        self.control_thread.start()

        # 5. Signal Handler for Ctrl+C
        signal.signal(signal.SIGINT, self._signal_handler)

    def _setup_collision_behavior(self):
        tau_th = [20.0, 20.0, 18.0, 18.0, 16.0, 14.0, 12.0]
        f_th = [20.0, 20.0, 20.0, 25.0, 25.0, 25.0]
        self.robot.set_collision_behavior(tau_th, tau_th, f_th, f_th)

    def _signal_handler(self, sig, frame):
        print("\n[Ctrl+C] Shutdown signal received.")
        self.stop()
        sys.exit(0)

    def _main_control_loop(self):
        """High-frequency background thread for 1kHz communication."""
        while self.running:
            if self.active_control is not None:
                try:
                    # Sync with robot clock
                    state, _ = self.active_control.readOnce()
                    self.last_robot_state = state

                    with self.lock:
                        if self.target_cmd is not None:
                            self.active_control.writeOnce(self.target_cmd)
                except Exception as e:
                    print(f"Control loop error: {e}")
                    self.active_control = None
            else:
                # Idle state to save CPU when no control is active
                time.sleep(0.01)

    def switch_control(self, control_type: str):
        """Thread-safe switching between different control modalities."""
        with self.lock:
            # Always stop current motion before starting a new one
            if self.active_control:
                self.robot.stop()
                self.active_control = None

            # Brief pause for the controller to reset
            time.sleep(0.1)

            # Fetch current state to ensure the new command starts from robot's actual pose
            state = self.robot.read_once()
            self.last_robot_state = state

            # Initialize specific control objects and default safe targets
            if control_type == "joint_position":
                self.target_cmd = JointPositions(state.q)
                self.active_control = self.robot.start_joint_position_control(
                    ControllerMode.CartesianImpedance
                )

            elif control_type == "joint_velocity":
                self.target_cmd = JointVelocities(np.zeros(7))
                self.active_control = self.robot.start_joint_velocity_control(
                    ControllerMode.CartesianImpedance
                )

            elif control_type == "cartesian_pose":
                self.target_cmd = CartesianPose(state.O_T_EE)
                self.active_control = self.robot.start_cartesian_pose_control(
                    ControllerMode.CartesianImpedance
                )

            elif control_type == "cartesian_velocity":
                self.target_cmd = CartesianVelocities(np.zeros(6))
                self.active_control = self.robot.start_cartesian_velocity_control(
                    ControllerMode.CartesianImpedance
                )

            elif control_type == "torque":
                self.target_cmd = Torques(np.zeros(7))
                self.active_control = self.robot.start_torque_control()

            else:
                print(f"Unknown control type: {control_type}")
                return

            self.active_control_type = control_type
            print(f"Switched to {control_type.upper()} mode.")

    def stop(self):
        """Graceful shutdown of the robot and thread."""
        print("Stopping robot...")
        self.running = False
        with self.lock:
            if self.active_control:
                self.robot.stop()
        print("Robot control stopped.")

    # --- Convenience Methods ---

    def send_joint_positions(self, q: np.ndarray):
        if self.active_control_type != "joint_position":
            self.switch_control("joint_position")
        with self.lock:
            self.target_cmd = JointPositions(q)

    def send_joint_velocities(self, dq: np.ndarray):
        if self.active_control_type != "joint_velocity":
            self.switch_control("joint_velocity")
        with self.lock:
            self.target_cmd = JointVelocities(dq)

    def send_cartesian_pose(self, pose: np.ndarray):
        if self.active_control_type != "cartesian_pose":
            self.switch_control("cartesian_pose")
        with self.lock:
            self.target_cmd = CartesianPose(pose)


if __name__ == "__main__":
    arm = FrankaControl("192.168.1.105")

    try:
        print("Starting in Joint Position mode. Holding current pose...")
        arm.switch_control("joint_position")

        while True:
            # Your main logic/decision making goes here
            time.sleep(1)

    except KeyboardInterrupt:
        arm.stop()
