bool relative # if true, move relative to current position

# Note that this requires quaternion; get this with scipy: e.g. Rotation.from_euler("xyz", [0, 0, math.pi / 2]).as_quat()
geometry_msgs/Pose pose 