From everything I have found, it doesn't seem like pylibfranka does what we want really at all. It seems to be ONLY for low level control with python, just like libfranka for high level control with C++.

What seems to be MUCH closer to what we want is Franky: https://github.com/TimSchneider42/franky/tree/master

This looks like it does all the low level stuff for you, and lets you just send high level commands like we would for the kinova.

This wouldn't be enough for using e.g. torques, or doing haptic control with the WAMs, but does look like it would be fine for most of our uses.

For imitation learning it might be worth it to just write one low level controller that is just for what we are specifically doing. In general I think pylibfranka (or just libfranka in general) might still be very useful if we just want to send some kind of low level control.

It also lets you update targets on the fly which is so fire. 

So, my goal will be to write a basic ROS2 bridge node with franky, so that we can easily communicate with vision and such, and use RQT/RVIZ/RealSense easily. 