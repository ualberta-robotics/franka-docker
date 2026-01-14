import time

import rclpy
from rclpy.qos import QoSProfile, ReliabilityPolicy, HistoryPolicy
from franky_msgs.msg import GripperMove, CartesianMove
from geometry_msgs.msg import Pose, Twist
from rclpy.node import Node
from sensor_msgs.msg import Joy
from std_msgs.msg import Float64, Float64MultiArray
from scipy.spatial.transform import Rotation


class FrankyXboxControl(Node):
    def __init__(self):
        super().__init__("franky_xbox_control")

        qos_fast = QoSProfile(
            reliability=ReliabilityPolicy.RELIABLE,
            history=HistoryPolicy.KEEP_LAST,
            depth=1
        )

        self.pub_cart_pose = self.create_publisher(CartesianMove, "fr3/cartesian_pose_cmd", qos_fast)
        self.pub_gripper = self.create_publisher(GripperMove, "fr3/gripper_move", qos_fast)

        self.sub_joy = self.create_subscription(Joy, "joy", self.joy_callback, qos_fast)
        self.create_timer(0.02, self.control_loop)

        time.sleep(1.0)
        self.get_logger().info("Franky Xbox Control Node Started. Listening for xbox input...")

        self.joy = None
        self.grip_width = 0.08


    def joy_callback(self, msg):
        self.joy = msg

    def control_loop(self):
        if not self.joy: return

        # 1. Cartesian (Left Stick + Bumpers)
        x = self.joy.axes[1] * 0.02  # Left Stick Y -> X
        y = -self.joy.axes[0] * 0.02  # Left Stick X -> -Y
        z = (self.joy.buttons[5] - self.joy.buttons[4]) * 0.02 # RB - LB

        # 2. Rotation (Right Stick) -> Yaw/Pitch
        yaw   = self.joy.axes[3] * 0.03
        pitch = self.joy.axes[4] * 0.03
        roll  = (self.joy.buttons[1] - self.joy.buttons[2]) * 0.03 # B(1) - X(2)
        quat = Rotation.from_euler('xyz', [yaw, pitch, roll], degrees=False).as_quat()

        # Publish Move if inputs exist
        if any(abs(v) > 0.001 for v in [x, y, z, yaw, pitch, roll]):
            msg = CartesianMove()
            msg.relative = True
            msg.pose.position.x, msg.pose.position.y, msg.pose.position.z = float(x), float(y), float(z)
            msg.pose.orientation.x, msg.pose.orientation.y, msg.pose.orientation.z, msg.pose.orientation.w = [float(v) for v in quat]
            self.pub_cart_pose.publish(msg)

        # 3. Gripper (Triggers)
        grip_change = 0.0
        if self.joy.axes[5] < -0.5: grip_change = -0.001
        elif self.joy.axes[2] < -0.5: grip_change = 0.001

        if grip_change != 0.0:
            self.grip_width += grip_change
            self.grip_width = max(0.0, min(0.08, self.grip_width))
            
            g_msg = GripperMove()
            g_msg.width = float(self.grip_width)
            g_msg.speed = 0.05
            self.pub_gripper.publish(g_msg)


def main(args=None):
    rclpy.init(args=args)
    control = FrankyXboxControl()

    try:
        rclpy.spin(control) 
    except KeyboardInterrupt:
        pass
    finally:
        control.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
