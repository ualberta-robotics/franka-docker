// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from franky_msgs:msg/GripperMove.idl
// generated code does not contain a copyright notice

#ifndef FRANKY_MSGS__MSG__DETAIL__GRIPPER_MOVE__STRUCT_H_
#define FRANKY_MSGS__MSG__DETAIL__GRIPPER_MOVE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/GripperMove in the package franky_msgs.
typedef struct franky_msgs__msg__GripperMove
{
  /// 0 = closed, 0.08 = open
  double width;
  /// m/s e.g. 0.05
  double speed;
} franky_msgs__msg__GripperMove;

// Struct for a sequence of franky_msgs__msg__GripperMove.
typedef struct franky_msgs__msg__GripperMove__Sequence
{
  franky_msgs__msg__GripperMove * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} franky_msgs__msg__GripperMove__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FRANKY_MSGS__MSG__DETAIL__GRIPPER_MOVE__STRUCT_H_
