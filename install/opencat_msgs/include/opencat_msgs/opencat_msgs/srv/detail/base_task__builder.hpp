// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from opencat_msgs:srv/BaseTask.idl
// generated code does not contain a copyright notice

#ifndef OPENCAT_MSGS__SRV__DETAIL__BASE_TASK__BUILDER_HPP_
#define OPENCAT_MSGS__SRV__DETAIL__BASE_TASK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "opencat_msgs/srv/detail/base_task__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace opencat_msgs
{

namespace srv
{

namespace builder
{

class Init_BaseTask_Request_delay
{
public:
  explicit Init_BaseTask_Request_delay(::opencat_msgs::srv::BaseTask_Request & msg)
  : msg_(msg)
  {}
  ::opencat_msgs::srv::BaseTask_Request delay(::opencat_msgs::srv::BaseTask_Request::_delay_type arg)
  {
    msg_.delay = std::move(arg);
    return std::move(msg_);
  }

private:
  ::opencat_msgs::srv::BaseTask_Request msg_;
};

class Init_BaseTask_Request_arguments
{
public:
  explicit Init_BaseTask_Request_arguments(::opencat_msgs::srv::BaseTask_Request & msg)
  : msg_(msg)
  {}
  Init_BaseTask_Request_delay arguments(::opencat_msgs::srv::BaseTask_Request::_arguments_type arg)
  {
    msg_.arguments = std::move(arg);
    return Init_BaseTask_Request_delay(msg_);
  }

private:
  ::opencat_msgs::srv::BaseTask_Request msg_;
};

class Init_BaseTask_Request_cmd
{
public:
  Init_BaseTask_Request_cmd()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BaseTask_Request_arguments cmd(::opencat_msgs::srv::BaseTask_Request::_cmd_type arg)
  {
    msg_.cmd = std::move(arg);
    return Init_BaseTask_Request_arguments(msg_);
  }

private:
  ::opencat_msgs::srv::BaseTask_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::opencat_msgs::srv::BaseTask_Request>()
{
  return opencat_msgs::srv::builder::Init_BaseTask_Request_cmd();
}

}  // namespace opencat_msgs


namespace opencat_msgs
{

namespace srv
{

namespace builder
{

class Init_BaseTask_Response_res
{
public:
  Init_BaseTask_Response_res()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::opencat_msgs::srv::BaseTask_Response res(::opencat_msgs::srv::BaseTask_Response::_res_type arg)
  {
    msg_.res = std::move(arg);
    return std::move(msg_);
  }

private:
  ::opencat_msgs::srv::BaseTask_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::opencat_msgs::srv::BaseTask_Response>()
{
  return opencat_msgs::srv::builder::Init_BaseTask_Response_res();
}

}  // namespace opencat_msgs

#endif  // OPENCAT_MSGS__SRV__DETAIL__BASE_TASK__BUILDER_HPP_
