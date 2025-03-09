// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from aria_vtti_interfaces:srv/Start.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "aria_vtti_interfaces/srv/detail/start__rosidl_typesupport_introspection_c.h"
#include "aria_vtti_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "aria_vtti_interfaces/srv/detail/start__functions.h"
#include "aria_vtti_interfaces/srv/detail/start__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void aria_vtti_interfaces__srv__Start_Request__rosidl_typesupport_introspection_c__Start_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  aria_vtti_interfaces__srv__Start_Request__init(message_memory);
}

void aria_vtti_interfaces__srv__Start_Request__rosidl_typesupport_introspection_c__Start_Request_fini_function(void * message_memory)
{
  aria_vtti_interfaces__srv__Start_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember aria_vtti_interfaces__srv__Start_Request__rosidl_typesupport_introspection_c__Start_Request_message_member_array[1] = {
  {
    "optval",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aria_vtti_interfaces__srv__Start_Request, optval),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers aria_vtti_interfaces__srv__Start_Request__rosidl_typesupport_introspection_c__Start_Request_message_members = {
  "aria_vtti_interfaces__srv",  // message namespace
  "Start_Request",  // message name
  1,  // number of fields
  sizeof(aria_vtti_interfaces__srv__Start_Request),
  aria_vtti_interfaces__srv__Start_Request__rosidl_typesupport_introspection_c__Start_Request_message_member_array,  // message members
  aria_vtti_interfaces__srv__Start_Request__rosidl_typesupport_introspection_c__Start_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  aria_vtti_interfaces__srv__Start_Request__rosidl_typesupport_introspection_c__Start_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t aria_vtti_interfaces__srv__Start_Request__rosidl_typesupport_introspection_c__Start_Request_message_type_support_handle = {
  0,
  &aria_vtti_interfaces__srv__Start_Request__rosidl_typesupport_introspection_c__Start_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aria_vtti_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aria_vtti_interfaces, srv, Start_Request)() {
  if (!aria_vtti_interfaces__srv__Start_Request__rosidl_typesupport_introspection_c__Start_Request_message_type_support_handle.typesupport_identifier) {
    aria_vtti_interfaces__srv__Start_Request__rosidl_typesupport_introspection_c__Start_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &aria_vtti_interfaces__srv__Start_Request__rosidl_typesupport_introspection_c__Start_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "aria_vtti_interfaces/srv/detail/start__rosidl_typesupport_introspection_c.h"
// already included above
// #include "aria_vtti_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "aria_vtti_interfaces/srv/detail/start__functions.h"
// already included above
// #include "aria_vtti_interfaces/srv/detail/start__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void aria_vtti_interfaces__srv__Start_Response__rosidl_typesupport_introspection_c__Start_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  aria_vtti_interfaces__srv__Start_Response__init(message_memory);
}

void aria_vtti_interfaces__srv__Start_Response__rosidl_typesupport_introspection_c__Start_Response_fini_function(void * message_memory)
{
  aria_vtti_interfaces__srv__Start_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember aria_vtti_interfaces__srv__Start_Response__rosidl_typesupport_introspection_c__Start_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aria_vtti_interfaces__srv__Start_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers aria_vtti_interfaces__srv__Start_Response__rosidl_typesupport_introspection_c__Start_Response_message_members = {
  "aria_vtti_interfaces__srv",  // message namespace
  "Start_Response",  // message name
  1,  // number of fields
  sizeof(aria_vtti_interfaces__srv__Start_Response),
  aria_vtti_interfaces__srv__Start_Response__rosidl_typesupport_introspection_c__Start_Response_message_member_array,  // message members
  aria_vtti_interfaces__srv__Start_Response__rosidl_typesupport_introspection_c__Start_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  aria_vtti_interfaces__srv__Start_Response__rosidl_typesupport_introspection_c__Start_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t aria_vtti_interfaces__srv__Start_Response__rosidl_typesupport_introspection_c__Start_Response_message_type_support_handle = {
  0,
  &aria_vtti_interfaces__srv__Start_Response__rosidl_typesupport_introspection_c__Start_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aria_vtti_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aria_vtti_interfaces, srv, Start_Response)() {
  if (!aria_vtti_interfaces__srv__Start_Response__rosidl_typesupport_introspection_c__Start_Response_message_type_support_handle.typesupport_identifier) {
    aria_vtti_interfaces__srv__Start_Response__rosidl_typesupport_introspection_c__Start_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &aria_vtti_interfaces__srv__Start_Response__rosidl_typesupport_introspection_c__Start_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "aria_vtti_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "aria_vtti_interfaces/srv/detail/start__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers aria_vtti_interfaces__srv__detail__start__rosidl_typesupport_introspection_c__Start_service_members = {
  "aria_vtti_interfaces__srv",  // service namespace
  "Start",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // aria_vtti_interfaces__srv__detail__start__rosidl_typesupport_introspection_c__Start_Request_message_type_support_handle,
  NULL  // response message
  // aria_vtti_interfaces__srv__detail__start__rosidl_typesupport_introspection_c__Start_Response_message_type_support_handle
};

static rosidl_service_type_support_t aria_vtti_interfaces__srv__detail__start__rosidl_typesupport_introspection_c__Start_service_type_support_handle = {
  0,
  &aria_vtti_interfaces__srv__detail__start__rosidl_typesupport_introspection_c__Start_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aria_vtti_interfaces, srv, Start_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aria_vtti_interfaces, srv, Start_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aria_vtti_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aria_vtti_interfaces, srv, Start)() {
  if (!aria_vtti_interfaces__srv__detail__start__rosidl_typesupport_introspection_c__Start_service_type_support_handle.typesupport_identifier) {
    aria_vtti_interfaces__srv__detail__start__rosidl_typesupport_introspection_c__Start_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)aria_vtti_interfaces__srv__detail__start__rosidl_typesupport_introspection_c__Start_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aria_vtti_interfaces, srv, Start_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aria_vtti_interfaces, srv, Start_Response)()->data;
  }

  return &aria_vtti_interfaces__srv__detail__start__rosidl_typesupport_introspection_c__Start_service_type_support_handle;
}
