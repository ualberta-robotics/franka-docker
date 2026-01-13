// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from franky_msgs:msg/CartesianMove.idl
// generated code does not contain a copyright notice

#ifndef FRANKY_MSGS__MSG__DETAIL__CARTESIAN_MOVE__STRUCT_H_
#define FRANKY_MSGS__MSG__DETAIL__CARTESIAN_MOVE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/CartesianMove in the package franky_msgs.
typedef struct franky_msgs__msg__CartesianMove
{
  /// if true, move relative to current position
  bool relative;
  /// Note that this requires quaternion; get this with scipy: e.g. Rotation.from_euler("xyz", [0, 0, math.pi / 2]).as_quat()
  geometry_msgs__msg__Pose pose;
} franky_msgs__msg__CartesianMove;

// Struct for a sequence of franky_msgs__msg__CartesianMove.
typedef struct franky_msgs__msg__CartesianMove__Sequence
{
  franky_msgs__msg__CartesianMove * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} franky_msgs__msg__CartesianMove__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FRANKY_MSGS__MSG__DETAIL__CARTESIAN_MOVE__STRUCT_H_
