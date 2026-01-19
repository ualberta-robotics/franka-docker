import os
import time
from os import path

import libtmux

if __name__ == "__main__":
    server = libtmux.Server(
        config_file=path.expandvars("/home/user/franka-docker/startup/.tmux.conf")
    )
    if server.has_session("franka"):
        exit()
    else:
        session = server.new_session(
            "franka", start_directory="/home/user/franka-docker", attach=False
        )

    # terminals for the simulation to start

    terminals = {
        "rqt": "rqt --perspective-file /home/user/franka-docker/startup/default.perspective",
        "rviz": "rviz2 -d /home/user/franka-docker/startup/pc.rviz",
        "franky_bringup": "ros2 launch franky_ros franky_bringup.launch.py",
        "realsense": "ros2 launch realsense_config pointcloud_rs.launch.py",
        "xbox_control": "ros2 launch franky_ros franky_xbox.launch.py",
    }

    for name, cmd in terminals.items():
        window = session.new_window(name, attach=False)
        window.select_layout(layout="tiled")
        pane = window.panes[0]
        time.sleep(0.1)
        pane.send_keys(cmd, suppress_history=True)
