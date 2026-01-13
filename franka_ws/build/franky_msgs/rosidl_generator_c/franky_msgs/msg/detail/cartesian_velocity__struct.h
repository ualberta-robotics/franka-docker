// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from franky_msgs:msg/CartesianVelocity.idl
// generated code does not contain a copyright notice

#ifndef FRANKY_MSGS__MSG__DETAIL__CARTESIAN_VELOCITY__STRUCT_H_
#define FRANKY_MSGS__MSG__DETAIL__CARTESIAN_VELOCITY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'twist'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/CartesianVelocity in the package franky_msgs.
typedef struct franky_msgs__msg__CartesianVelocity
{
  uint32_t duration_millis;
  /// m/s and rad/s
  rosidl_runtime_c__double__Sequence twist;
} franky_msgs__msg__CartesianVelocity;

// Struct for a sequence of franky_msgs__msg__CartesianVelocity.
typedef struct franky_msgs__msg__CartesianVelocity__Sequence
{
  franky_msgs__msg__CartesianVelocity * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} franky_msgs__msg__CartesianVelocity__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FRANKY_MSGS__MSG__DETAIL__CARTESIAN_VELOCITY__STRUCT_H_
