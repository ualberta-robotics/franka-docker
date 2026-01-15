from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node


def generate_launch_description():
    # TODO: config for xbox controller mapping
    # Define the node
    franky_ros = Node(
        package="franky_ros",  # Ensure this matches your package name in setup.py
        executable="franky_xbox",
        name="franky_xbox",
        output="screen",
    )

    joy = Node(
        package="joy",  # Ensure this matches your package name in setup.py
        executable="joy_node",
        name="joy_node",
    )

    return LaunchDescription(
        [
            franky_ros,
            joy,
        ]
    )
