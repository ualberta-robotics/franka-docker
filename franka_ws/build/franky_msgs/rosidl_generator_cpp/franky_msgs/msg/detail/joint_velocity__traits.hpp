// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from franky_msgs:msg/JointVelocity.idl
// generated code does not contain a copyright notice

#ifndef FRANKY_MSGS__MSG__DETAIL__JOINT_VELOCITY__TRAITS_HPP_
#define FRANKY_MSGS__MSG__DETAIL__JOINT_VELOCITY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "franky_msgs/msg/detail/joint_velocity__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace franky_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const JointVelocity & msg,
  std::ostream & out)
{
  out << "{";
  // member: duration_millis
  {
    out << "duration_millis: ";
    rosidl_generator_traits::value_to_yaml(msg.duration_millis, out);
    out << ", ";
  }

  // member: vels
  {
    if (msg.vels.size() == 0) {
      out << "vels: []";
    } else {
      out << "vels: [";
      size_t pending_items = msg.vels.size();
      for (auto item : msg.vels) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JointVelocity & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: duration_millis
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "duration_millis: ";
    rosidl_generator_traits::value_to_yaml(msg.duration_millis, out);
    out << "\n";
  }

  // member: vels
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.vels.size() == 0) {
      out << "vels: []\n";
    } else {
      out << "vels:\n";
      for (auto item : msg.vels) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JointVelocity & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace franky_msgs

namespace rosidl_generator_traits
{

[[deprecated("use franky_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const franky_msgs::msg::JointVelocity & msg,
  std::ostream & out, size_t indentation = 0)
{
  franky_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use franky_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const franky_msgs::msg::JointVelocity & msg)
{
  return franky_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<franky_msgs::msg::JointVelocity>()
{
  return "franky_msgs::msg::JointVelocity";
}

template<>
inline const char * name<franky_msgs::msg::JointVelocity>()
{
  return "franky_msgs/msg/JointVelocity";
}

template<>
struct has_fixed_size<franky_msgs::msg::JointVelocity>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<franky_msgs::msg::JointVelocity>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<franky_msgs::msg::JointVelocity>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FRANKY_MSGS__MSG__DETAIL__JOINT_VELOCITY__TRAITS_HPP_
