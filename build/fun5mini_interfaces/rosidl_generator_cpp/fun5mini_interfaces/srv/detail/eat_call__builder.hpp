// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fun5mini_interfaces:srv/EatCall.idl
// generated code does not contain a copyright notice

#ifndef FUN5MINI_INTERFACES__SRV__DETAIL__EAT_CALL__BUILDER_HPP_
#define FUN5MINI_INTERFACES__SRV__DETAIL__EAT_CALL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fun5mini_interfaces/srv/detail/eat_call__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fun5mini_interfaces
{

namespace srv
{

namespace builder
{

class Init_EatCall_Request_call
{
public:
  Init_EatCall_Request_call()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::fun5mini_interfaces::srv::EatCall_Request call(::fun5mini_interfaces::srv::EatCall_Request::_call_type arg)
  {
    msg_.call = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fun5mini_interfaces::srv::EatCall_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::fun5mini_interfaces::srv::EatCall_Request>()
{
  return fun5mini_interfaces::srv::builder::Init_EatCall_Request_call();
}

}  // namespace fun5mini_interfaces


namespace fun5mini_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::fun5mini_interfaces::srv::EatCall_Response>()
{
  return ::fun5mini_interfaces::srv::EatCall_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace fun5mini_interfaces

#endif  // FUN5MINI_INTERFACES__SRV__DETAIL__EAT_CALL__BUILDER_HPP_
