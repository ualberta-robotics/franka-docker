// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from franky_msgs:msg/GripperState.idl
// generated code does not contain a copyright notice

#ifndef FRANKY_MSGS__MSG__DETAIL__GRIPPER_STATE__STRUCT_H_
#define FRANKY_MSGS__MSG__DETAIL__GRIPPER_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/GripperState in the package franky_msgs.
typedef struct franky_msgs__msg__GripperState
{
  double width;
  bool is_grasped;
} franky_msgs__msg__GripperState;

// Struct for a sequence of franky_msgs__msg__GripperState.
typedef struct franky_msgs__msg__GripperState__Sequence
{
  franky_msgs__msg__GripperState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} franky_msgs__msg__GripperState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FRANKY_MSGS__MSG__DETAIL__GRIPPER_STATE__STRUCT_H_
