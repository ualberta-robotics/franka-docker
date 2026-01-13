// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from franky_msgs:msg/GripperGrasp.idl
// generated code does not contain a copyright notice

#ifndef FRANKY_MSGS__MSG__DETAIL__GRIPPER_GRASP__STRUCT_H_
#define FRANKY_MSGS__MSG__DETAIL__GRIPPER_GRASP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/GripperGrasp in the package franky_msgs.
typedef struct franky_msgs__msg__GripperGrasp
{
  /// 0 = closed, 0.08 = open
  double width;
  /// m/s e.g. 0.05
  double speed;
  /// N, e.g. 20
  double force;
  /// These commands determine whether the "grasp" is successful based on
  /// the final gripper width after the grasp attempt.
  /// Set these low if you care about specific objects, or high if you want it to
  /// return successful even with variations in object size.
  /// m
  double epsilon_inner;
  /// m
  double epsilon_outer;
} franky_msgs__msg__GripperGrasp;

// Struct for a sequence of franky_msgs__msg__GripperGrasp.
typedef struct franky_msgs__msg__GripperGrasp__Sequence
{
  franky_msgs__msg__GripperGrasp * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} franky_msgs__msg__GripperGrasp__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FRANKY_MSGS__MSG__DETAIL__GRIPPER_GRASP__STRUCT_H_
