// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from opencat_msgs:srv/BaseTask.idl
// generated code does not contain a copyright notice
#include "opencat_msgs/srv/detail/base_task__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "opencat_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "opencat_msgs/srv/detail/base_task__struct.h"
#include "opencat_msgs/srv/detail/base_task__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // arguments
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // arguments

// forward declare type support functions


using _BaseTask_Request__ros_msg_type = opencat_msgs__srv__BaseTask_Request;

static bool _BaseTask_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _BaseTask_Request__ros_msg_type * ros_message = static_cast<const _BaseTask_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: cmd
  {
    cdr << ros_message->cmd;
  }

  // Field name: arguments
  {
    size_t size = ros_message->arguments.size;
    auto array_ptr = ros_message->arguments.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: delay
  {
    cdr << ros_message->delay;
  }

  return true;
}

static bool _BaseTask_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _BaseTask_Request__ros_msg_type * ros_message = static_cast<_BaseTask_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: cmd
  {
    cdr >> ros_message->cmd;
  }

  // Field name: arguments
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->arguments.data) {
      rosidl_runtime_c__int16__Sequence__fini(&ros_message->arguments);
    }
    if (!rosidl_runtime_c__int16__Sequence__init(&ros_message->arguments, size)) {
      fprintf(stderr, "failed to create array for field 'arguments'");
      return false;
    }
    auto array_ptr = ros_message->arguments.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: delay
  {
    cdr >> ros_message->delay;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_opencat_msgs
size_t get_serialized_size_opencat_msgs__srv__BaseTask_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BaseTask_Request__ros_msg_type * ros_message = static_cast<const _BaseTask_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name cmd
  {
    size_t item_size = sizeof(ros_message->cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name arguments
  {
    size_t array_size = ros_message->arguments.size;
    auto array_ptr = ros_message->arguments.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name delay
  {
    size_t item_size = sizeof(ros_message->delay);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _BaseTask_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_opencat_msgs__srv__BaseTask_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_opencat_msgs
size_t max_serialized_size_opencat_msgs__srv__BaseTask_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: cmd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: arguments
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: delay
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = opencat_msgs__srv__BaseTask_Request;
    is_plain =
      (
      offsetof(DataType, delay) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _BaseTask_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_opencat_msgs__srv__BaseTask_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_BaseTask_Request = {
  "opencat_msgs::srv",
  "BaseTask_Request",
  _BaseTask_Request__cdr_serialize,
  _BaseTask_Request__cdr_deserialize,
  _BaseTask_Request__get_serialized_size,
  _BaseTask_Request__max_serialized_size
};

static rosidl_message_type_support_t _BaseTask_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BaseTask_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, opencat_msgs, srv, BaseTask_Request)() {
  return &_BaseTask_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "opencat_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "opencat_msgs/srv/detail/base_task__struct.h"
// already included above
// #include "opencat_msgs/srv/detail/base_task__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _BaseTask_Response__ros_msg_type = opencat_msgs__srv__BaseTask_Response;

static bool _BaseTask_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _BaseTask_Response__ros_msg_type * ros_message = static_cast<const _BaseTask_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: res
  {
    cdr << (ros_message->res ? true : false);
  }

  return true;
}

static bool _BaseTask_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _BaseTask_Response__ros_msg_type * ros_message = static_cast<_BaseTask_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: res
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->res = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_opencat_msgs
size_t get_serialized_size_opencat_msgs__srv__BaseTask_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BaseTask_Response__ros_msg_type * ros_message = static_cast<const _BaseTask_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name res
  {
    size_t item_size = sizeof(ros_message->res);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _BaseTask_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_opencat_msgs__srv__BaseTask_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_opencat_msgs
size_t max_serialized_size_opencat_msgs__srv__BaseTask_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: res
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = opencat_msgs__srv__BaseTask_Response;
    is_plain =
      (
      offsetof(DataType, res) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _BaseTask_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_opencat_msgs__srv__BaseTask_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_BaseTask_Response = {
  "opencat_msgs::srv",
  "BaseTask_Response",
  _BaseTask_Response__cdr_serialize,
  _BaseTask_Response__cdr_deserialize,
  _BaseTask_Response__get_serialized_size,
  _BaseTask_Response__max_serialized_size
};

static rosidl_message_type_support_t _BaseTask_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BaseTask_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, opencat_msgs, srv, BaseTask_Response)() {
  return &_BaseTask_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "opencat_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "opencat_msgs/srv/base_task.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t BaseTask__callbacks = {
  "opencat_msgs::srv",
  "BaseTask",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, opencat_msgs, srv, BaseTask_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, opencat_msgs, srv, BaseTask_Response)(),
};

static rosidl_service_type_support_t BaseTask__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &BaseTask__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, opencat_msgs, srv, BaseTask)() {
  return &BaseTask__handle;
}

#if defined(__cplusplus)
}
#endif
