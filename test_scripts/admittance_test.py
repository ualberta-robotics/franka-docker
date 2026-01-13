import signal
import sys

import numpy as np
import pylibfranka

# Global flag for graceful shutdown
running = True


def signal_handler(sig, frame):
    global running
    print("\nInterrupt received, stopping safely...")
    running = False


def run_pylibfranka_direct(robot_ip):
    global running
    signal.signal(signal.SIGINT, signal_handler)

    robot = pylibfranka.Robot(robot_ip, pylibfranka.RealtimeConfig.kIgnore)

    # 1. Start the control session manually
    # Note: We assign the returned object to 'control'
    control = robot.start_cartesian_velocity_control(
        pylibfranka.ControllerMode.CartesianImpedance
    )

    # Admittance Tuning
    DAMPING_TRANS = 40.0
    DAMPING_ROT = 40.0  # Torques are smaller numbers, so they need smaller damping

    DEADBAND = 3.0
    VEL_ALPHA = 0.02
    FORCE_ALPHA = 0.1
    MAX_ACCEL = 0.5  # m/s^2
    MAX_JERK = 100.0  # m/s^3 (optional, but keep accel smooth)
    DT = 0.001  # 1ms loop
    current_vel = np.zeros(6)
    last_vel = np.zeros(6)
    filtered_force = np.zeros(6)

    print("Direct 1kHz loop active. Push the robot arm!")

    try:
        while running:
            # 2. Read the state (blocks until the next 1ms pulse)
            state, _ = control.readOnce()
            state: pylibfranka.RobotState

            raw_force = np.array(state.O_F_ext_hat_K)
            filtered_force = (
                1.0 - FORCE_ALPHA
            ) * filtered_force + FORCE_ALPHA * raw_force

            # 2. Ramped Deadband on filtered force
            f_cmd = np.where(
                np.abs(filtered_force) > DEADBAND,
                filtered_force - np.sign(filtered_force) * DEADBAND,
                0.0,
            )

            # 3. Target Velocity

            # Inside the loop:
            target_vel = np.zeros(6)
            target_vel[:3] = -f_cmd[:3] / DAMPING_TRANS
            target_vel[3:] = -f_cmd[3:] / DAMPING_ROT

            # 4. VELOCITY SMOOTHING (Output Smoothing)
            raw_vel = (1.0 - VEL_ALPHA) * current_vel + VEL_ALPHA * target_vel

            # 5. Slew Rate Limiter (Acceleration Protection)
            vel_diff = raw_vel - last_vel
            max_dv = MAX_ACCEL * DT
            limited_dv = np.clip(vel_diff, -max_dv, max_dv)
            current_vel = last_vel + limited_dv

            # 6. Safety Clip & Write
            current_vel = np.clip(current_vel, -0.2, 0.2)
            control.writeOnce(pylibfranka.CartesianVelocities(current_vel.tolist()))

            last_vel = np.copy(current_vel)

    except Exception as e:
        print(f"Control loop error: {e}")
    finally:
        # 5. Crucial: Explicitly stop the controller to release the robot
        print("Releasing robot control...")
        robot.stop()


if __name__ == "__main__":
    run_pylibfranka_direct("192.168.1.105")
