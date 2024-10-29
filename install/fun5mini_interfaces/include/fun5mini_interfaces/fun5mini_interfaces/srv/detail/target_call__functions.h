// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from fun5mini_interfaces:srv/TargetCall.idl
// generated code does not contain a copyright notice

#ifndef FUN5MINI_INTERFACES__SRV__DETAIL__TARGET_CALL__FUNCTIONS_H_
#define FUN5MINI_INTERFACES__SRV__DETAIL__TARGET_CALL__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "fun5mini_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "fun5mini_interfaces/srv/detail/target_call__struct.h"

/// Initialize srv/TargetCall message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * fun5mini_interfaces__srv__TargetCall_Request
 * )) before or use
 * fun5mini_interfaces__srv__TargetCall_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_fun5mini_interfaces
bool
fun5mini_interfaces__srv__TargetCall_Request__init(fun5mini_interfaces__srv__TargetCall_Request * msg);

/// Finalize srv/TargetCall message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fun5mini_interfaces
void
fun5mini_interfaces__srv__TargetCall_Request__fini(fun5mini_interfaces__srv__TargetCall_Request * msg);

/// Create srv/TargetCall message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * fun5mini_interfaces__srv__TargetCall_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fun5mini_interfaces
fun5mini_interfaces__srv__TargetCall_Request *
fun5mini_interfaces__srv__TargetCall_Request__create();

/// Destroy srv/TargetCall message.
/**
 * It calls
 * fun5mini_interfaces__srv__TargetCall_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fun5mini_interfaces
void
fun5mini_interfaces__srv__TargetCall_Request__destroy(fun5mini_interfaces__srv__TargetCall_Request * msg);

/// Check for srv/TargetCall message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_fun5mini_interfaces
bool
fun5mini_interfaces__srv__TargetCall_Request__are_equal(const fun5mini_interfaces__srv__TargetCall_Request * lhs, const fun5mini_interfaces__srv__TargetCall_Request * rhs);

/// Copy a srv/TargetCall message.
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
ROSIDL_GENERATOR_C_PUBLIC_fun5mini_interfaces
bool
fun5mini_interfaces__srv__TargetCall_Request__copy(
  const fun5mini_interfaces__srv__TargetCall_Request * input,
  fun5mini_interfaces__srv__TargetCall_Request * output);

/// Initialize array of srv/TargetCall messages.
/**
 * It allocates the memory for the number of elements and calls
 * fun5mini_interfaces__srv__TargetCall_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_fun5mini_interfaces
bool
fun5mini_interfaces__srv__TargetCall_Request__Sequence__init(fun5mini_interfaces__srv__TargetCall_Request__Sequence * array, size_t size);

/// Finalize array of srv/TargetCall messages.
/**
 * It calls
 * fun5mini_interfaces__srv__TargetCall_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fun5mini_interfaces
void
fun5mini_interfaces__srv__TargetCall_Request__Sequence__fini(fun5mini_interfaces__srv__TargetCall_Request__Sequence * array);

/// Create array of srv/TargetCall messages.
/**
 * It allocates the memory for the array and calls
 * fun5mini_interfaces__srv__TargetCall_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fun5mini_interfaces
fun5mini_interfaces__srv__TargetCall_Request__Sequence *
fun5mini_interfaces__srv__TargetCall_Request__Sequence__create(size_t size);

/// Destroy array of srv/TargetCall messages.
/**
 * It calls
 * fun5mini_interfaces__srv__TargetCall_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fun5mini_interfaces
void
fun5mini_interfaces__srv__TargetCall_Request__Sequence__destroy(fun5mini_interfaces__srv__TargetCall_Request__Sequence * array);

/// Check for srv/TargetCall message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_fun5mini_interfaces
bool
fun5mini_interfaces__srv__TargetCall_Request__Sequence__are_equal(const fun5mini_interfaces__srv__TargetCall_Request__Sequence * lhs, const fun5mini_interfaces__srv__TargetCall_Request__Sequence * rhs);

/// Copy an array of srv/TargetCall messages.
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
ROSIDL_GENERATOR_C_PUBLIC_fun5mini_interfaces
bool
fun5mini_interfaces__srv__TargetCall_Request__Sequence__copy(
  const fun5mini_interfaces__srv__TargetCall_Request__Sequence * input,
  fun5mini_interfaces__srv__TargetCall_Request__Sequence * output);

/// Initialize srv/TargetCall message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * fun5mini_interfaces__srv__TargetCall_Response
 * )) before or use
 * fun5mini_interfaces__srv__TargetCall_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_fun5mini_interfaces
bool
fun5mini_interfaces__srv__TargetCall_Response__init(fun5mini_interfaces__srv__TargetCall_Response * msg);

/// Finalize srv/TargetCall message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fun5mini_interfaces
void
fun5mini_interfaces__srv__TargetCall_Response__fini(fun5mini_interfaces__srv__TargetCall_Response * msg);

/// Create srv/TargetCall message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * fun5mini_interfaces__srv__TargetCall_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fun5mini_interfaces
fun5mini_interfaces__srv__TargetCall_Response *
fun5mini_interfaces__srv__TargetCall_Response__create();

/// Destroy srv/TargetCall message.
/**
 * It calls
 * fun5mini_interfaces__srv__TargetCall_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fun5mini_interfaces
void
fun5mini_interfaces__srv__TargetCall_Response__destroy(fun5mini_interfaces__srv__TargetCall_Response * msg);

/// Check for srv/TargetCall message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_fun5mini_interfaces
bool
fun5mini_interfaces__srv__TargetCall_Response__are_equal(const fun5mini_interfaces__srv__TargetCall_Response * lhs, const fun5mini_interfaces__srv__TargetCall_Response * rhs);

/// Copy a srv/TargetCall message.
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
ROSIDL_GENERATOR_C_PUBLIC_fun5mini_interfaces
bool
fun5mini_interfaces__srv__TargetCall_Response__copy(
  const fun5mini_interfaces__srv__TargetCall_Response * input,
  fun5mini_interfaces__srv__TargetCall_Response * output);

/// Initialize array of srv/TargetCall messages.
/**
 * It allocates the memory for the number of elements and calls
 * fun5mini_interfaces__srv__TargetCall_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_fun5mini_interfaces
bool
fun5mini_interfaces__srv__TargetCall_Response__Sequence__init(fun5mini_interfaces__srv__TargetCall_Response__Sequence * array, size_t size);

/// Finalize array of srv/TargetCall messages.
/**
 * It calls
 * fun5mini_interfaces__srv__TargetCall_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fun5mini_interfaces
void
fun5mini_interfaces__srv__TargetCall_Response__Sequence__fini(fun5mini_interfaces__srv__TargetCall_Response__Sequence * array);

/// Create array of srv/TargetCall messages.
/**
 * It allocates the memory for the array and calls
 * fun5mini_interfaces__srv__TargetCall_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fun5mini_interfaces
fun5mini_interfaces__srv__TargetCall_Response__Sequence *
fun5mini_interfaces__srv__TargetCall_Response__Sequence__create(size_t size);

/// Destroy array of srv/TargetCall messages.
/**
 * It calls
 * fun5mini_interfaces__srv__TargetCall_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fun5mini_interfaces
void
fun5mini_interfaces__srv__TargetCall_Response__Sequence__destroy(fun5mini_interfaces__srv__TargetCall_Response__Sequence * array);

/// Check for srv/TargetCall message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_fun5mini_interfaces
bool
fun5mini_interfaces__srv__TargetCall_Response__Sequence__are_equal(const fun5mini_interfaces__srv__TargetCall_Response__Sequence * lhs, const fun5mini_interfaces__srv__TargetCall_Response__Sequence * rhs);

/// Copy an array of srv/TargetCall messages.
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
ROSIDL_GENERATOR_C_PUBLIC_fun5mini_interfaces
bool
fun5mini_interfaces__srv__TargetCall_Response__Sequence__copy(
  const fun5mini_interfaces__srv__TargetCall_Response__Sequence * input,
  fun5mini_interfaces__srv__TargetCall_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // FUN5MINI_INTERFACES__SRV__DETAIL__TARGET_CALL__FUNCTIONS_H_
