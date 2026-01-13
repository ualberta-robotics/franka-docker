// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from franky_msgs:srv/SetDynamicsFactor.idl
// generated code does not contain a copyright notice

#ifndef FRANKY_MSGS__SRV__DETAIL__SET_DYNAMICS_FACTOR__TRAITS_HPP_
#define FRANKY_MSGS__SRV__DETAIL__SET_DYNAMICS_FACTOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "franky_msgs/srv/detail/set_dynamics_factor__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace franky_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetDynamicsFactor_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: velocity_limit
  {
    out << "velocity_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_limit, out);
    out << ", ";
  }

  // member: acceleration_limit
  {
    out << "acceleration_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration_limit, out);
    out << ", ";
  }

  // member: jerk_limit
  {
    out << "jerk_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.jerk_limit, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetDynamicsFactor_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: velocity_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_limit, out);
    out << "\n";
  }

  // member: acceleration_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration_limit, out);
    out << "\n";
  }

  // member: jerk_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "jerk_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.jerk_limit, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetDynamicsFactor_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace franky_msgs

namespace rosidl_generator_traits
{

[[deprecated("use franky_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const franky_msgs::srv::SetDynamicsFactor_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  franky_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use franky_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const franky_msgs::srv::SetDynamicsFactor_Request & msg)
{
  return franky_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<franky_msgs::srv::SetDynamicsFactor_Request>()
{
  return "franky_msgs::srv::SetDynamicsFactor_Request";
}

template<>
inline const char * name<franky_msgs::srv::SetDynamicsFactor_Request>()
{
  return "franky_msgs/srv/SetDynamicsFactor_Request";
}

template<>
struct has_fixed_size<franky_msgs::srv::SetDynamicsFactor_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<franky_msgs::srv::SetDynamicsFactor_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<franky_msgs::srv::SetDynamicsFactor_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace franky_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetDynamicsFactor_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetDynamicsFactor_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetDynamicsFactor_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace franky_msgs

namespace rosidl_generator_traits
{

[[deprecated("use franky_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const franky_msgs::srv::SetDynamicsFactor_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  franky_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use franky_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const franky_msgs::srv::SetDynamicsFactor_Response & msg)
{
  return franky_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<franky_msgs::srv::SetDynamicsFactor_Response>()
{
  return "franky_msgs::srv::SetDynamicsFactor_Response";
}

template<>
inline const char * name<franky_msgs::srv::SetDynamicsFactor_Response>()
{
  return "franky_msgs/srv/SetDynamicsFactor_Response";
}

template<>
struct has_fixed_size<franky_msgs::srv::SetDynamicsFactor_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<franky_msgs::srv::SetDynamicsFactor_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<franky_msgs::srv::SetDynamicsFactor_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<franky_msgs::srv::SetDynamicsFactor>()
{
  return "franky_msgs::srv::SetDynamicsFactor";
}

template<>
inline const char * name<franky_msgs::srv::SetDynamicsFactor>()
{
  return "franky_msgs/srv/SetDynamicsFactor";
}

template<>
struct has_fixed_size<franky_msgs::srv::SetDynamicsFactor>
  : std::integral_constant<
    bool,
    has_fixed_size<franky_msgs::srv::SetDynamicsFactor_Request>::value &&
    has_fixed_size<franky_msgs::srv::SetDynamicsFactor_Response>::value
  >
{
};

template<>
struct has_bounded_size<franky_msgs::srv::SetDynamicsFactor>
  : std::integral_constant<
    bool,
    has_bounded_size<franky_msgs::srv::SetDynamicsFactor_Request>::value &&
    has_bounded_size<franky_msgs::srv::SetDynamicsFactor_Response>::value
  >
{
};

template<>
struct is_service<franky_msgs::srv::SetDynamicsFactor>
  : std::true_type
{
};

template<>
struct is_service_request<franky_msgs::srv::SetDynamicsFactor_Request>
  : std::true_type
{
};

template<>
struct is_service_response<franky_msgs::srv::SetDynamicsFactor_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // FRANKY_MSGS__SRV__DETAIL__SET_DYNAMICS_FACTOR__TRAITS_HPP_
