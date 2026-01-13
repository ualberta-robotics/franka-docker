// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from franky_msgs:srv/BlockingJointMove.idl
// generated code does not contain a copyright notice

#ifndef FRANKY_MSGS__SRV__DETAIL__BLOCKING_JOINT_MOVE__STRUCT_H_
#define FRANKY_MSGS__SRV__DETAIL__BLOCKING_JOINT_MOVE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'target'
#include "franky_msgs/msg/detail/joint_move__struct.h"

/// Struct defined in srv/BlockingJointMove in the package franky_msgs.
typedef struct franky_msgs__srv__BlockingJointMove_Request
{
  franky_msgs__msg__JointMove target;
} franky_msgs__srv__BlockingJointMove_Request;

// Struct for a sequence of franky_msgs__srv__BlockingJointMove_Request.
typedef struct franky_msgs__srv__BlockingJointMove_Request__Sequence
{
  franky_msgs__srv__BlockingJointMove_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} franky_msgs__srv__BlockingJointMove_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/BlockingJointMove in the package franky_msgs.
typedef struct franky_msgs__srv__BlockingJointMove_Response
{
  bool success;
} franky_msgs__srv__BlockingJointMove_Response;

// Struct for a sequence of franky_msgs__srv__BlockingJointMove_Response.
typedef struct franky_msgs__srv__BlockingJointMove_Response__Sequence
{
  franky_msgs__srv__BlockingJointMove_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} franky_msgs__srv__BlockingJointMove_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FRANKY_MSGS__SRV__DETAIL__BLOCKING_JOINT_MOVE__STRUCT_H_
