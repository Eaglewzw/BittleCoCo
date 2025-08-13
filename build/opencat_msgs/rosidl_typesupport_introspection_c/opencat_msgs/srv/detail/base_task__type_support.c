// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from opencat_msgs:srv/BaseTask.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "opencat_msgs/srv/detail/base_task__rosidl_typesupport_introspection_c.h"
#include "opencat_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "opencat_msgs/srv/detail/base_task__functions.h"
#include "opencat_msgs/srv/detail/base_task__struct.h"


// Include directives for member types
// Member `arguments`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void opencat_msgs__srv__BaseTask_Request__rosidl_typesupport_introspection_c__BaseTask_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  opencat_msgs__srv__BaseTask_Request__init(message_memory);
}

void opencat_msgs__srv__BaseTask_Request__rosidl_typesupport_introspection_c__BaseTask_Request_fini_function(void * message_memory)
{
  opencat_msgs__srv__BaseTask_Request__fini(message_memory);
}

size_t opencat_msgs__srv__BaseTask_Request__rosidl_typesupport_introspection_c__size_function__BaseTask_Request__arguments(
  const void * untyped_member)
{
  const rosidl_runtime_c__int16__Sequence * member =
    (const rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return member->size;
}

const void * opencat_msgs__srv__BaseTask_Request__rosidl_typesupport_introspection_c__get_const_function__BaseTask_Request__arguments(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int16__Sequence * member =
    (const rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return &member->data[index];
}

void * opencat_msgs__srv__BaseTask_Request__rosidl_typesupport_introspection_c__get_function__BaseTask_Request__arguments(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int16__Sequence * member =
    (rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return &member->data[index];
}

void opencat_msgs__srv__BaseTask_Request__rosidl_typesupport_introspection_c__fetch_function__BaseTask_Request__arguments(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int16_t * item =
    ((const int16_t *)
    opencat_msgs__srv__BaseTask_Request__rosidl_typesupport_introspection_c__get_const_function__BaseTask_Request__arguments(untyped_member, index));
  int16_t * value =
    (int16_t *)(untyped_value);
  *value = *item;
}

void opencat_msgs__srv__BaseTask_Request__rosidl_typesupport_introspection_c__assign_function__BaseTask_Request__arguments(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int16_t * item =
    ((int16_t *)
    opencat_msgs__srv__BaseTask_Request__rosidl_typesupport_introspection_c__get_function__BaseTask_Request__arguments(untyped_member, index));
  const int16_t * value =
    (const int16_t *)(untyped_value);
  *item = *value;
}

bool opencat_msgs__srv__BaseTask_Request__rosidl_typesupport_introspection_c__resize_function__BaseTask_Request__arguments(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int16__Sequence * member =
    (rosidl_runtime_c__int16__Sequence *)(untyped_member);
  rosidl_runtime_c__int16__Sequence__fini(member);
  return rosidl_runtime_c__int16__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember opencat_msgs__srv__BaseTask_Request__rosidl_typesupport_introspection_c__BaseTask_Request_message_member_array[3] = {
  {
    "cmd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(opencat_msgs__srv__BaseTask_Request, cmd),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "arguments",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(opencat_msgs__srv__BaseTask_Request, arguments),  // bytes offset in struct
    NULL,  // default value
    opencat_msgs__srv__BaseTask_Request__rosidl_typesupport_introspection_c__size_function__BaseTask_Request__arguments,  // size() function pointer
    opencat_msgs__srv__BaseTask_Request__rosidl_typesupport_introspection_c__get_const_function__BaseTask_Request__arguments,  // get_const(index) function pointer
    opencat_msgs__srv__BaseTask_Request__rosidl_typesupport_introspection_c__get_function__BaseTask_Request__arguments,  // get(index) function pointer
    opencat_msgs__srv__BaseTask_Request__rosidl_typesupport_introspection_c__fetch_function__BaseTask_Request__arguments,  // fetch(index, &value) function pointer
    opencat_msgs__srv__BaseTask_Request__rosidl_typesupport_introspection_c__assign_function__BaseTask_Request__arguments,  // assign(index, value) function pointer
    opencat_msgs__srv__BaseTask_Request__rosidl_typesupport_introspection_c__resize_function__BaseTask_Request__arguments  // resize(index) function pointer
  },
  {
    "delay",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(opencat_msgs__srv__BaseTask_Request, delay),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers opencat_msgs__srv__BaseTask_Request__rosidl_typesupport_introspection_c__BaseTask_Request_message_members = {
  "opencat_msgs__srv",  // message namespace
  "BaseTask_Request",  // message name
  3,  // number of fields
  sizeof(opencat_msgs__srv__BaseTask_Request),
  opencat_msgs__srv__BaseTask_Request__rosidl_typesupport_introspection_c__BaseTask_Request_message_member_array,  // message members
  opencat_msgs__srv__BaseTask_Request__rosidl_typesupport_introspection_c__BaseTask_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  opencat_msgs__srv__BaseTask_Request__rosidl_typesupport_introspection_c__BaseTask_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t opencat_msgs__srv__BaseTask_Request__rosidl_typesupport_introspection_c__BaseTask_Request_message_type_support_handle = {
  0,
  &opencat_msgs__srv__BaseTask_Request__rosidl_typesupport_introspection_c__BaseTask_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_opencat_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, opencat_msgs, srv, BaseTask_Request)() {
  if (!opencat_msgs__srv__BaseTask_Request__rosidl_typesupport_introspection_c__BaseTask_Request_message_type_support_handle.typesupport_identifier) {
    opencat_msgs__srv__BaseTask_Request__rosidl_typesupport_introspection_c__BaseTask_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &opencat_msgs__srv__BaseTask_Request__rosidl_typesupport_introspection_c__BaseTask_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "opencat_msgs/srv/detail/base_task__rosidl_typesupport_introspection_c.h"
// already included above
// #include "opencat_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "opencat_msgs/srv/detail/base_task__functions.h"
// already included above
// #include "opencat_msgs/srv/detail/base_task__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void opencat_msgs__srv__BaseTask_Response__rosidl_typesupport_introspection_c__BaseTask_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  opencat_msgs__srv__BaseTask_Response__init(message_memory);
}

void opencat_msgs__srv__BaseTask_Response__rosidl_typesupport_introspection_c__BaseTask_Response_fini_function(void * message_memory)
{
  opencat_msgs__srv__BaseTask_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember opencat_msgs__srv__BaseTask_Response__rosidl_typesupport_introspection_c__BaseTask_Response_message_member_array[1] = {
  {
    "res",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(opencat_msgs__srv__BaseTask_Response, res),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers opencat_msgs__srv__BaseTask_Response__rosidl_typesupport_introspection_c__BaseTask_Response_message_members = {
  "opencat_msgs__srv",  // message namespace
  "BaseTask_Response",  // message name
  1,  // number of fields
  sizeof(opencat_msgs__srv__BaseTask_Response),
  opencat_msgs__srv__BaseTask_Response__rosidl_typesupport_introspection_c__BaseTask_Response_message_member_array,  // message members
  opencat_msgs__srv__BaseTask_Response__rosidl_typesupport_introspection_c__BaseTask_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  opencat_msgs__srv__BaseTask_Response__rosidl_typesupport_introspection_c__BaseTask_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t opencat_msgs__srv__BaseTask_Response__rosidl_typesupport_introspection_c__BaseTask_Response_message_type_support_handle = {
  0,
  &opencat_msgs__srv__BaseTask_Response__rosidl_typesupport_introspection_c__BaseTask_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_opencat_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, opencat_msgs, srv, BaseTask_Response)() {
  if (!opencat_msgs__srv__BaseTask_Response__rosidl_typesupport_introspection_c__BaseTask_Response_message_type_support_handle.typesupport_identifier) {
    opencat_msgs__srv__BaseTask_Response__rosidl_typesupport_introspection_c__BaseTask_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &opencat_msgs__srv__BaseTask_Response__rosidl_typesupport_introspection_c__BaseTask_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "opencat_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "opencat_msgs/srv/detail/base_task__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers opencat_msgs__srv__detail__base_task__rosidl_typesupport_introspection_c__BaseTask_service_members = {
  "opencat_msgs__srv",  // service namespace
  "BaseTask",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // opencat_msgs__srv__detail__base_task__rosidl_typesupport_introspection_c__BaseTask_Request_message_type_support_handle,
  NULL  // response message
  // opencat_msgs__srv__detail__base_task__rosidl_typesupport_introspection_c__BaseTask_Response_message_type_support_handle
};

static rosidl_service_type_support_t opencat_msgs__srv__detail__base_task__rosidl_typesupport_introspection_c__BaseTask_service_type_support_handle = {
  0,
  &opencat_msgs__srv__detail__base_task__rosidl_typesupport_introspection_c__BaseTask_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, opencat_msgs, srv, BaseTask_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, opencat_msgs, srv, BaseTask_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_opencat_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, opencat_msgs, srv, BaseTask)() {
  if (!opencat_msgs__srv__detail__base_task__rosidl_typesupport_introspection_c__BaseTask_service_type_support_handle.typesupport_identifier) {
    opencat_msgs__srv__detail__base_task__rosidl_typesupport_introspection_c__BaseTask_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)opencat_msgs__srv__detail__base_task__rosidl_typesupport_introspection_c__BaseTask_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, opencat_msgs, srv, BaseTask_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, opencat_msgs, srv, BaseTask_Response)()->data;
  }

  return &opencat_msgs__srv__detail__base_task__rosidl_typesupport_introspection_c__BaseTask_service_type_support_handle;
}
