// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from franky_msgs:msg/GripperMove.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "franky_msgs/msg/detail/gripper_move__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace franky_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void GripperMove_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) franky_msgs::msg::GripperMove(_init);
}

void GripperMove_fini_function(void * message_memory)
{
  auto typed_message = static_cast<franky_msgs::msg::GripperMove *>(message_memory);
  typed_message->~GripperMove();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GripperMove_message_member_array[2] = {
  {
    "width",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franky_msgs::msg::GripperMove, width),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "speed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franky_msgs::msg::GripperMove, speed),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GripperMove_message_members = {
  "franky_msgs::msg",  // message namespace
  "GripperMove",  // message name
  2,  // number of fields
  sizeof(franky_msgs::msg::GripperMove),
  GripperMove_message_member_array,  // message members
  GripperMove_init_function,  // function to initialize message memory (memory has to be allocated)
  GripperMove_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GripperMove_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GripperMove_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace franky_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<franky_msgs::msg::GripperMove>()
{
  return &::franky_msgs::msg::rosidl_typesupport_introspection_cpp::GripperMove_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, franky_msgs, msg, GripperMove)() {
  return &::franky_msgs::msg::rosidl_typesupport_introspection_cpp::GripperMove_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
