// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aria_vtti_interfaces:srv/Start.idl
// generated code does not contain a copyright notice

#ifndef ARIA_VTTI_INTERFACES__SRV__DETAIL__START__STRUCT_H_
#define ARIA_VTTI_INTERFACES__SRV__DETAIL__START__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Start in the package aria_vtti_interfaces.
typedef struct aria_vtti_interfaces__srv__Start_Request
{
  int32_t optval;
} aria_vtti_interfaces__srv__Start_Request;

// Struct for a sequence of aria_vtti_interfaces__srv__Start_Request.
typedef struct aria_vtti_interfaces__srv__Start_Request__Sequence
{
  aria_vtti_interfaces__srv__Start_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aria_vtti_interfaces__srv__Start_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Start in the package aria_vtti_interfaces.
typedef struct aria_vtti_interfaces__srv__Start_Response
{
  bool success;
} aria_vtti_interfaces__srv__Start_Response;

// Struct for a sequence of aria_vtti_interfaces__srv__Start_Response.
typedef struct aria_vtti_interfaces__srv__Start_Response__Sequence
{
  aria_vtti_interfaces__srv__Start_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aria_vtti_interfaces__srv__Start_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARIA_VTTI_INTERFACES__SRV__DETAIL__START__STRUCT_H_
