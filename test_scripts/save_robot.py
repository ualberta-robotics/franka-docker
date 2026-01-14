import pylibfranka

robot = pylibfranka.Robot("192.168.1.105", pylibfranka.RealtimeConfig.kIgnore)
robot.automatic_error_recovery()
