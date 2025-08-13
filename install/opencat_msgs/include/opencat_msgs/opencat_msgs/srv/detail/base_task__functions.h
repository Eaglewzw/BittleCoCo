// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from opencat_msgs:srv/BaseTask.idl
// generated code does not contain a copyright notice

#ifndef OPENCAT_MSGS__SRV__DETAIL__BASE_TASK__FUNCTIONS_H_
#define OPENCAT_MSGS__SRV__DETAIL__BASE_TASK__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "opencat_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "opencat_msgs/srv/detail/base_task__struct.h"

/// Initialize srv/BaseTask message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * opencat_msgs__srv__BaseTask_Request
 * )) before or use
 * opencat_msgs__srv__BaseTask_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_opencat_msgs
bool
opencat_msgs__srv__BaseTask_Request__init(opencat_msgs__srv__BaseTask_Request * msg);

/// Finalize srv/BaseTask message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_opencat_msgs
void
opencat_msgs__srv__BaseTask_Request__fini(opencat_msgs__srv__BaseTask_Request * msg);

/// Create srv/BaseTask message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * opencat_msgs__srv__BaseTask_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_opencat_msgs
opencat_msgs__srv__BaseTask_Request *
opencat_msgs__srv__BaseTask_Request__create();

/// Destroy srv/BaseTask message.
/**
 * It calls
 * opencat_msgs__srv__BaseTask_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_opencat_msgs
void
opencat_msgs__srv__BaseTask_Request__destroy(opencat_msgs__srv__BaseTask_Request * msg);

/// Check for srv/BaseTask message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_opencat_msgs
bool
opencat_msgs__srv__BaseTask_Request__are_equal(const opencat_msgs__srv__BaseTask_Request * lhs, const opencat_msgs__srv__BaseTask_Request * rhs);

/// Copy a srv/BaseTask message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_opencat_msgs
bool
opencat_msgs__srv__BaseTask_Request__copy(
  const opencat_msgs__srv__BaseTask_Request * input,
  opencat_msgs__srv__BaseTask_Request * output);

/// Initialize array of srv/BaseTask messages.
/**
 * It allocates the memory for the number of elements and calls
 * opencat_msgs__srv__BaseTask_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_opencat_msgs
bool
opencat_msgs__srv__BaseTask_Request__Sequence__init(opencat_msgs__srv__BaseTask_Request__Sequence * array, size_t size);

/// Finalize array of srv/BaseTask messages.
/**
 * It calls
 * opencat_msgs__srv__BaseTask_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_opencat_msgs
void
opencat_msgs__srv__BaseTask_Request__Sequence__fini(opencat_msgs__srv__BaseTask_Request__Sequence * array);

/// Create array of srv/BaseTask messages.
/**
 * It allocates the memory for the array and calls
 * opencat_msgs__srv__BaseTask_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_opencat_msgs
opencat_msgs__srv__BaseTask_Request__Sequence *
opencat_msgs__srv__BaseTask_Request__Sequence__create(size_t size);

/// Destroy array of srv/BaseTask messages.
/**
 * It calls
 * opencat_msgs__srv__BaseTask_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_opencat_msgs
void
opencat_msgs__srv__BaseTask_Request__Sequence__destroy(opencat_msgs__srv__BaseTask_Request__Sequence * array);

/// Check for srv/BaseTask message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_opencat_msgs
bool
opencat_msgs__srv__BaseTask_Request__Sequence__are_equal(const opencat_msgs__srv__BaseTask_Request__Sequence * lhs, const opencat_msgs__srv__BaseTask_Request__Sequence * rhs);

/// Copy an array of srv/BaseTask messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_opencat_msgs
bool
opencat_msgs__srv__BaseTask_Request__Sequence__copy(
  const opencat_msgs__srv__BaseTask_Request__Sequence * input,
  opencat_msgs__srv__BaseTask_Request__Sequence * output);

/// Initialize srv/BaseTask message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * opencat_msgs__srv__BaseTask_Response
 * )) before or use
 * opencat_msgs__srv__BaseTask_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_opencat_msgs
bool
opencat_msgs__srv__BaseTask_Response__init(opencat_msgs__srv__BaseTask_Response * msg);

/// Finalize srv/BaseTask message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_opencat_msgs
void
opencat_msgs__srv__BaseTask_Response__fini(opencat_msgs__srv__BaseTask_Response * msg);

/// Create srv/BaseTask message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * opencat_msgs__srv__BaseTask_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_opencat_msgs
opencat_msgs__srv__BaseTask_Response *
opencat_msgs__srv__BaseTask_Response__create();

/// Destroy srv/BaseTask message.
/**
 * It calls
 * opencat_msgs__srv__BaseTask_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_opencat_msgs
void
opencat_msgs__srv__BaseTask_Response__destroy(opencat_msgs__srv__BaseTask_Response * msg);

/// Check for srv/BaseTask message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_opencat_msgs
bool
opencat_msgs__srv__BaseTask_Response__are_equal(const opencat_msgs__srv__BaseTask_Response * lhs, const opencat_msgs__srv__BaseTask_Response * rhs);

/// Copy a srv/BaseTask message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_opencat_msgs
bool
opencat_msgs__srv__BaseTask_Response__copy(
  const opencat_msgs__srv__BaseTask_Response * input,
  opencat_msgs__srv__BaseTask_Response * output);

/// Initialize array of srv/BaseTask messages.
/**
 * It allocates the memory for the number of elements and calls
 * opencat_msgs__srv__BaseTask_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_opencat_msgs
bool
opencat_msgs__srv__BaseTask_Response__Sequence__init(opencat_msgs__srv__BaseTask_Response__Sequence * array, size_t size);

/// Finalize array of srv/BaseTask messages.
/**
 * It calls
 * opencat_msgs__srv__BaseTask_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_opencat_msgs
void
opencat_msgs__srv__BaseTask_Response__Sequence__fini(opencat_msgs__srv__BaseTask_Response__Sequence * array);

/// Create array of srv/BaseTask messages.
/**
 * It allocates the memory for the array and calls
 * opencat_msgs__srv__BaseTask_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_opencat_msgs
opencat_msgs__srv__BaseTask_Response__Sequence *
opencat_msgs__srv__BaseTask_Response__Sequence__create(size_t size);

/// Destroy array of srv/BaseTask messages.
/**
 * It calls
 * opencat_msgs__srv__BaseTask_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_opencat_msgs
void
opencat_msgs__srv__BaseTask_Response__Sequence__destroy(opencat_msgs__srv__BaseTask_Response__Sequence * array);

/// Check for srv/BaseTask message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_opencat_msgs
bool
opencat_msgs__srv__BaseTask_Response__Sequence__are_equal(const opencat_msgs__srv__BaseTask_Response__Sequence * lhs, const opencat_msgs__srv__BaseTask_Response__Sequence * rhs);

/// Copy an array of srv/BaseTask messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_opencat_msgs
bool
opencat_msgs__srv__BaseTask_Response__Sequence__copy(
  const opencat_msgs__srv__BaseTask_Response__Sequence * input,
  opencat_msgs__srv__BaseTask_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // OPENCAT_MSGS__SRV__DETAIL__BASE_TASK__FUNCTIONS_H_
