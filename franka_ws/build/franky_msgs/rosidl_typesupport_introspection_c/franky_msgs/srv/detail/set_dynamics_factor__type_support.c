// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from franky_msgs:srv/SetDynamicsFactor.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "franky_msgs/srv/detail/set_dynamics_factor__rosidl_typesupport_introspection_c.h"
#include "franky_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "franky_msgs/srv/detail/set_dynamics_factor__functions.h"
#include "franky_msgs/srv/detail/set_dynamics_factor__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void franky_msgs__srv__SetDynamicsFactor_Request__rosidl_typesupport_introspection_c__SetDynamicsFactor_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  franky_msgs__srv__SetDynamicsFactor_Request__init(message_memory);
}

void franky_msgs__srv__SetDynamicsFactor_Request__rosidl_typesupport_introspection_c__SetDynamicsFactor_Request_fini_function(void * message_memory)
{
  franky_msgs__srv__SetDynamicsFactor_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember franky_msgs__srv__SetDynamicsFactor_Request__rosidl_typesupport_introspection_c__SetDynamicsFactor_Request_message_member_array[3] = {
  {
    "velocity_limit",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franky_msgs__srv__SetDynamicsFactor_Request, velocity_limit),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "acceleration_limit",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franky_msgs__srv__SetDynamicsFactor_Request, acceleration_limit),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "jerk_limit",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franky_msgs__srv__SetDynamicsFactor_Request, jerk_limit),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers franky_msgs__srv__SetDynamicsFactor_Request__rosidl_typesupport_introspection_c__SetDynamicsFactor_Request_message_members = {
  "franky_msgs__srv",  // message namespace
  "SetDynamicsFactor_Request",  // message name
  3,  // number of fields
  sizeof(franky_msgs__srv__SetDynamicsFactor_Request),
  franky_msgs__srv__SetDynamicsFactor_Request__rosidl_typesupport_introspection_c__SetDynamicsFactor_Request_message_member_array,  // message members
  franky_msgs__srv__SetDynamicsFactor_Request__rosidl_typesupport_introspection_c__SetDynamicsFactor_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  franky_msgs__srv__SetDynamicsFactor_Request__rosidl_typesupport_introspection_c__SetDynamicsFactor_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t franky_msgs__srv__SetDynamicsFactor_Request__rosidl_typesupport_introspection_c__SetDynamicsFactor_Request_message_type_support_handle = {
  0,
  &franky_msgs__srv__SetDynamicsFactor_Request__rosidl_typesupport_introspection_c__SetDynamicsFactor_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_franky_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franky_msgs, srv, SetDynamicsFactor_Request)() {
  if (!franky_msgs__srv__SetDynamicsFactor_Request__rosidl_typesupport_introspection_c__SetDynamicsFactor_Request_message_type_support_handle.typesupport_identifier) {
    franky_msgs__srv__SetDynamicsFactor_Request__rosidl_typesupport_introspection_c__SetDynamicsFactor_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &franky_msgs__srv__SetDynamicsFactor_Request__rosidl_typesupport_introspection_c__SetDynamicsFactor_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "franky_msgs/srv/detail/set_dynamics_factor__rosidl_typesupport_introspection_c.h"
// already included above
// #include "franky_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "franky_msgs/srv/detail/set_dynamics_factor__functions.h"
// already included above
// #include "franky_msgs/srv/detail/set_dynamics_factor__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void franky_msgs__srv__SetDynamicsFactor_Response__rosidl_typesupport_introspection_c__SetDynamicsFactor_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  franky_msgs__srv__SetDynamicsFactor_Response__init(message_memory);
}

void franky_msgs__srv__SetDynamicsFactor_Response__rosidl_typesupport_introspection_c__SetDynamicsFactor_Response_fini_function(void * message_memory)
{
  franky_msgs__srv__SetDynamicsFactor_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember franky_msgs__srv__SetDynamicsFactor_Response__rosidl_typesupport_introspection_c__SetDynamicsFactor_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franky_msgs__srv__SetDynamicsFactor_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers franky_msgs__srv__SetDynamicsFactor_Response__rosidl_typesupport_introspection_c__SetDynamicsFactor_Response_message_members = {
  "franky_msgs__srv",  // message namespace
  "SetDynamicsFactor_Response",  // message name
  1,  // number of fields
  sizeof(franky_msgs__srv__SetDynamicsFactor_Response),
  franky_msgs__srv__SetDynamicsFactor_Response__rosidl_typesupport_introspection_c__SetDynamicsFactor_Response_message_member_array,  // message members
  franky_msgs__srv__SetDynamicsFactor_Response__rosidl_typesupport_introspection_c__SetDynamicsFactor_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  franky_msgs__srv__SetDynamicsFactor_Response__rosidl_typesupport_introspection_c__SetDynamicsFactor_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t franky_msgs__srv__SetDynamicsFactor_Response__rosidl_typesupport_introspection_c__SetDynamicsFactor_Response_message_type_support_handle = {
  0,
  &franky_msgs__srv__SetDynamicsFactor_Response__rosidl_typesupport_introspection_c__SetDynamicsFactor_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_franky_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franky_msgs, srv, SetDynamicsFactor_Response)() {
  if (!franky_msgs__srv__SetDynamicsFactor_Response__rosidl_typesupport_introspection_c__SetDynamicsFactor_Response_message_type_support_handle.typesupport_identifier) {
    franky_msgs__srv__SetDynamicsFactor_Response__rosidl_typesupport_introspection_c__SetDynamicsFactor_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &franky_msgs__srv__SetDynamicsFactor_Response__rosidl_typesupport_introspection_c__SetDynamicsFactor_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "franky_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "franky_msgs/srv/detail/set_dynamics_factor__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers franky_msgs__srv__detail__set_dynamics_factor__rosidl_typesupport_introspection_c__SetDynamicsFactor_service_members = {
  "franky_msgs__srv",  // service namespace
  "SetDynamicsFactor",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // franky_msgs__srv__detail__set_dynamics_factor__rosidl_typesupport_introspection_c__SetDynamicsFactor_Request_message_type_support_handle,
  NULL  // response message
  // franky_msgs__srv__detail__set_dynamics_factor__rosidl_typesupport_introspection_c__SetDynamicsFactor_Response_message_type_support_handle
};

static rosidl_service_type_support_t franky_msgs__srv__detail__set_dynamics_factor__rosidl_typesupport_introspection_c__SetDynamicsFactor_service_type_support_handle = {
  0,
  &franky_msgs__srv__detail__set_dynamics_factor__rosidl_typesupport_introspection_c__SetDynamicsFactor_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franky_msgs, srv, SetDynamicsFactor_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franky_msgs, srv, SetDynamicsFactor_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_franky_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franky_msgs, srv, SetDynamicsFactor)() {
  if (!franky_msgs__srv__detail__set_dynamics_factor__rosidl_typesupport_introspection_c__SetDynamicsFactor_service_type_support_handle.typesupport_identifier) {
    franky_msgs__srv__detail__set_dynamics_factor__rosidl_typesupport_introspection_c__SetDynamicsFactor_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)franky_msgs__srv__detail__set_dynamics_factor__rosidl_typesupport_introspection_c__SetDynamicsFactor_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franky_msgs, srv, SetDynamicsFactor_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franky_msgs, srv, SetDynamicsFactor_Response)()->data;
  }

  return &franky_msgs__srv__detail__set_dynamics_factor__rosidl_typesupport_introspection_c__SetDynamicsFactor_service_type_support_handle;
}
