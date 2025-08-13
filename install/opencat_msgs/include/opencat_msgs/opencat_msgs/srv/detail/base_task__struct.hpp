// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from opencat_msgs:srv/BaseTask.idl
// generated code does not contain a copyright notice

#ifndef OPENCAT_MSGS__SRV__DETAIL__BASE_TASK__STRUCT_HPP_
#define OPENCAT_MSGS__SRV__DETAIL__BASE_TASK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__opencat_msgs__srv__BaseTask_Request __attribute__((deprecated))
#else
# define DEPRECATED__opencat_msgs__srv__BaseTask_Request __declspec(deprecated)
#endif

namespace opencat_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct BaseTask_Request_
{
  using Type = BaseTask_Request_<ContainerAllocator>;

  explicit BaseTask_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cmd = 0;
      this->delay = 0.0f;
    }
  }

  explicit BaseTask_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cmd = 0;
      this->delay = 0.0f;
    }
  }

  // field types and members
  using _cmd_type =
    uint8_t;
  _cmd_type cmd;
  using _arguments_type =
    std::vector<int16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int16_t>>;
  _arguments_type arguments;
  using _delay_type =
    float;
  _delay_type delay;

  // setters for named parameter idiom
  Type & set__cmd(
    const uint8_t & _arg)
  {
    this->cmd = _arg;
    return *this;
  }
  Type & set__arguments(
    const std::vector<int16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int16_t>> & _arg)
  {
    this->arguments = _arg;
    return *this;
  }
  Type & set__delay(
    const float & _arg)
  {
    this->delay = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    opencat_msgs::srv::BaseTask_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const opencat_msgs::srv::BaseTask_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<opencat_msgs::srv::BaseTask_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<opencat_msgs::srv::BaseTask_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      opencat_msgs::srv::BaseTask_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<opencat_msgs::srv::BaseTask_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      opencat_msgs::srv::BaseTask_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<opencat_msgs::srv::BaseTask_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<opencat_msgs::srv::BaseTask_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<opencat_msgs::srv::BaseTask_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__opencat_msgs__srv__BaseTask_Request
    std::shared_ptr<opencat_msgs::srv::BaseTask_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__opencat_msgs__srv__BaseTask_Request
    std::shared_ptr<opencat_msgs::srv::BaseTask_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BaseTask_Request_ & other) const
  {
    if (this->cmd != other.cmd) {
      return false;
    }
    if (this->arguments != other.arguments) {
      return false;
    }
    if (this->delay != other.delay) {
      return false;
    }
    return true;
  }
  bool operator!=(const BaseTask_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BaseTask_Request_

// alias to use template instance with default allocator
using BaseTask_Request =
  opencat_msgs::srv::BaseTask_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace opencat_msgs


#ifndef _WIN32
# define DEPRECATED__opencat_msgs__srv__BaseTask_Response __attribute__((deprecated))
#else
# define DEPRECATED__opencat_msgs__srv__BaseTask_Response __declspec(deprecated)
#endif

namespace opencat_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct BaseTask_Response_
{
  using Type = BaseTask_Response_<ContainerAllocator>;

  explicit BaseTask_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->res = false;
    }
  }

  explicit BaseTask_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->res = false;
    }
  }

  // field types and members
  using _res_type =
    bool;
  _res_type res;

  // setters for named parameter idiom
  Type & set__res(
    const bool & _arg)
  {
    this->res = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    opencat_msgs::srv::BaseTask_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const opencat_msgs::srv::BaseTask_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<opencat_msgs::srv::BaseTask_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<opencat_msgs::srv::BaseTask_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      opencat_msgs::srv::BaseTask_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<opencat_msgs::srv::BaseTask_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      opencat_msgs::srv::BaseTask_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<opencat_msgs::srv::BaseTask_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<opencat_msgs::srv::BaseTask_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<opencat_msgs::srv::BaseTask_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__opencat_msgs__srv__BaseTask_Response
    std::shared_ptr<opencat_msgs::srv::BaseTask_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__opencat_msgs__srv__BaseTask_Response
    std::shared_ptr<opencat_msgs::srv::BaseTask_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BaseTask_Response_ & other) const
  {
    if (this->res != other.res) {
      return false;
    }
    return true;
  }
  bool operator!=(const BaseTask_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BaseTask_Response_

// alias to use template instance with default allocator
using BaseTask_Response =
  opencat_msgs::srv::BaseTask_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace opencat_msgs

namespace opencat_msgs
{

namespace srv
{

struct BaseTask
{
  using Request = opencat_msgs::srv::BaseTask_Request;
  using Response = opencat_msgs::srv::BaseTask_Response;
};

}  // namespace srv

}  // namespace opencat_msgs

#endif  // OPENCAT_MSGS__SRV__DETAIL__BASE_TASK__STRUCT_HPP_
