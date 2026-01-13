// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from franky_msgs:msg/JointMove.idl
// generated code does not contain a copyright notice

#ifndef FRANKY_MSGS__MSG__DETAIL__JOINT_MOVE__STRUCT_H_
#define FRANKY_MSGS__MSG__DETAIL__JOINT_MOVE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'positions'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/JointMove in the package franky_msgs.
typedef struct franky_msgs__msg__JointMove
{
  /// if true, move relative to current position
  bool relative;
  /// radians
  rosidl_runtime_c__double__Sequence positions;
} franky_msgs__msg__JointMove;

// Struct for a sequence of franky_msgs__msg__JointMove.
typedef struct franky_msgs__msg__JointMove__Sequence
{
  franky_msgs__msg__JointMove * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} franky_msgs__msg__JointMove__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FRANKY_MSGS__MSG__DETAIL__JOINT_MOVE__STRUCT_H_
