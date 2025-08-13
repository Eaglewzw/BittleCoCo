// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from opencat_msgs:srv/BaseTask.idl
// generated code does not contain a copyright notice

#ifndef OPENCAT_MSGS__SRV__DETAIL__BASE_TASK__STRUCT_H_
#define OPENCAT_MSGS__SRV__DETAIL__BASE_TASK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'arguments'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/BaseTask in the package opencat_msgs.
typedef struct opencat_msgs__srv__BaseTask_Request
{
  uint8_t cmd;
  rosidl_runtime_c__int16__Sequence arguments;
  float delay;
} opencat_msgs__srv__BaseTask_Request;

// Struct for a sequence of opencat_msgs__srv__BaseTask_Request.
typedef struct opencat_msgs__srv__BaseTask_Request__Sequence
{
  opencat_msgs__srv__BaseTask_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} opencat_msgs__srv__BaseTask_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/BaseTask in the package opencat_msgs.
typedef struct opencat_msgs__srv__BaseTask_Response
{
  bool res;
} opencat_msgs__srv__BaseTask_Response;

// Struct for a sequence of opencat_msgs__srv__BaseTask_Response.
typedef struct opencat_msgs__srv__BaseTask_Response__Sequence
{
  opencat_msgs__srv__BaseTask_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} opencat_msgs__srv__BaseTask_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OPENCAT_MSGS__SRV__DETAIL__BASE_TASK__STRUCT_H_
