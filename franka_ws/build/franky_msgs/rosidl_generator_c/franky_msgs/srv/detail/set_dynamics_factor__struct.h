// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from franky_msgs:srv/SetDynamicsFactor.idl
// generated code does not contain a copyright notice

#ifndef FRANKY_MSGS__SRV__DETAIL__SET_DYNAMICS_FACTOR__STRUCT_H_
#define FRANKY_MSGS__SRV__DETAIL__SET_DYNAMICS_FACTOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetDynamicsFactor in the package franky_msgs.
typedef struct franky_msgs__srv__SetDynamicsFactor_Request
{
  double velocity_limit;
  double acceleration_limit;
  double jerk_limit;
} franky_msgs__srv__SetDynamicsFactor_Request;

// Struct for a sequence of franky_msgs__srv__SetDynamicsFactor_Request.
typedef struct franky_msgs__srv__SetDynamicsFactor_Request__Sequence
{
  franky_msgs__srv__SetDynamicsFactor_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} franky_msgs__srv__SetDynamicsFactor_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetDynamicsFactor in the package franky_msgs.
typedef struct franky_msgs__srv__SetDynamicsFactor_Response
{
  bool success;
} franky_msgs__srv__SetDynamicsFactor_Response;

// Struct for a sequence of franky_msgs__srv__SetDynamicsFactor_Response.
typedef struct franky_msgs__srv__SetDynamicsFactor_Response__Sequence
{
  franky_msgs__srv__SetDynamicsFactor_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} franky_msgs__srv__SetDynamicsFactor_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FRANKY_MSGS__SRV__DETAIL__SET_DYNAMICS_FACTOR__STRUCT_H_
