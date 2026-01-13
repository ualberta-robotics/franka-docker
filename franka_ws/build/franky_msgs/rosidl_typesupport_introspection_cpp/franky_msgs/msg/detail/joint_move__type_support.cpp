// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from franky_msgs:msg/JointMove.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "franky_msgs/msg/detail/joint_move__struct.hpp"
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

void JointMove_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) franky_msgs::msg::JointMove(_init);
}

void JointMove_fini_function(void * message_memory)
{
  auto typed_message = static_cast<franky_msgs::msg::JointMove *>(message_memory);
  typed_message->~JointMove();
}

size_t size_function__JointMove__positions(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__JointMove__positions(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__JointMove__positions(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__JointMove__positions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__JointMove__positions(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__JointMove__positions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__JointMove__positions(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__JointMove__positions(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember JointMove_message_member_array[2] = {
  {
    "relative",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franky_msgs::msg::JointMove, relative),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "positions",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franky_msgs::msg::JointMove, positions),  // bytes offset in struct
    nullptr,  // default value
    size_function__JointMove__positions,  // size() function pointer
    get_const_function__JointMove__positions,  // get_const(index) function pointer
    get_function__JointMove__positions,  // get(index) function pointer
    fetch_function__JointMove__positions,  // fetch(index, &value) function pointer
    assign_function__JointMove__positions,  // assign(index, value) function pointer
    resize_function__JointMove__positions  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers JointMove_message_members = {
  "franky_msgs::msg",  // message namespace
  "JointMove",  // message name
  2,  // number of fields
  sizeof(franky_msgs::msg::JointMove),
  JointMove_message_member_array,  // message members
  JointMove_init_function,  // function to initialize message memory (memory has to be allocated)
  JointMove_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t JointMove_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &JointMove_message_members,
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
get_message_type_support_handle<franky_msgs::msg::JointMove>()
{
  return &::franky_msgs::msg::rosidl_typesupport_introspection_cpp::JointMove_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, franky_msgs, msg, JointMove)() {
  return &::franky_msgs::msg::rosidl_typesupport_introspection_cpp::JointMove_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
