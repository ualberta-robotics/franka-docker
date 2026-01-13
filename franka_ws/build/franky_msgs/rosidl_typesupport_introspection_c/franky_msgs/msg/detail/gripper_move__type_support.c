// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from franky_msgs:msg/GripperMove.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "franky_msgs/msg/detail/gripper_move__rosidl_typesupport_introspection_c.h"
#include "franky_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "franky_msgs/msg/detail/gripper_move__functions.h"
#include "franky_msgs/msg/detail/gripper_move__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void franky_msgs__msg__GripperMove__rosidl_typesupport_introspection_c__GripperMove_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  franky_msgs__msg__GripperMove__init(message_memory);
}

void franky_msgs__msg__GripperMove__rosidl_typesupport_introspection_c__GripperMove_fini_function(void * message_memory)
{
  franky_msgs__msg__GripperMove__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember franky_msgs__msg__GripperMove__rosidl_typesupport_introspection_c__GripperMove_message_member_array[2] = {
  {
    "width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franky_msgs__msg__GripperMove, width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franky_msgs__msg__GripperMove, speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers franky_msgs__msg__GripperMove__rosidl_typesupport_introspection_c__GripperMove_message_members = {
  "franky_msgs__msg",  // message namespace
  "GripperMove",  // message name
  2,  // number of fields
  sizeof(franky_msgs__msg__GripperMove),
  franky_msgs__msg__GripperMove__rosidl_typesupport_introspection_c__GripperMove_message_member_array,  // message members
  franky_msgs__msg__GripperMove__rosidl_typesupport_introspection_c__GripperMove_init_function,  // function to initialize message memory (memory has to be allocated)
  franky_msgs__msg__GripperMove__rosidl_typesupport_introspection_c__GripperMove_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t franky_msgs__msg__GripperMove__rosidl_typesupport_introspection_c__GripperMove_message_type_support_handle = {
  0,
  &franky_msgs__msg__GripperMove__rosidl_typesupport_introspection_c__GripperMove_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_franky_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franky_msgs, msg, GripperMove)() {
  if (!franky_msgs__msg__GripperMove__rosidl_typesupport_introspection_c__GripperMove_message_type_support_handle.typesupport_identifier) {
    franky_msgs__msg__GripperMove__rosidl_typesupport_introspection_c__GripperMove_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &franky_msgs__msg__GripperMove__rosidl_typesupport_introspection_c__GripperMove_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
