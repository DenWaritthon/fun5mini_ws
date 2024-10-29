// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fun5mini_interfaces:srv/EatCall.idl
// generated code does not contain a copyright notice

#ifndef FUN5MINI_INTERFACES__SRV__DETAIL__EAT_CALL__STRUCT_HPP_
#define FUN5MINI_INTERFACES__SRV__DETAIL__EAT_CALL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__fun5mini_interfaces__srv__EatCall_Request __attribute__((deprecated))
#else
# define DEPRECATED__fun5mini_interfaces__srv__EatCall_Request __declspec(deprecated)
#endif

namespace fun5mini_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct EatCall_Request_
{
  using Type = EatCall_Request_<ContainerAllocator>;

  explicit EatCall_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->eat = false;
    }
  }

  explicit EatCall_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->eat = false;
    }
  }

  // field types and members
  using _eat_type =
    bool;
  _eat_type eat;

  // setters for named parameter idiom
  Type & set__eat(
    const bool & _arg)
  {
    this->eat = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fun5mini_interfaces::srv::EatCall_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const fun5mini_interfaces::srv::EatCall_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fun5mini_interfaces::srv::EatCall_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fun5mini_interfaces::srv::EatCall_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fun5mini_interfaces::srv::EatCall_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fun5mini_interfaces::srv::EatCall_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fun5mini_interfaces::srv::EatCall_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fun5mini_interfaces::srv::EatCall_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fun5mini_interfaces::srv::EatCall_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fun5mini_interfaces::srv::EatCall_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fun5mini_interfaces__srv__EatCall_Request
    std::shared_ptr<fun5mini_interfaces::srv::EatCall_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fun5mini_interfaces__srv__EatCall_Request
    std::shared_ptr<fun5mini_interfaces::srv::EatCall_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EatCall_Request_ & other) const
  {
    if (this->eat != other.eat) {
      return false;
    }
    return true;
  }
  bool operator!=(const EatCall_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EatCall_Request_

// alias to use template instance with default allocator
using EatCall_Request =
  fun5mini_interfaces::srv::EatCall_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace fun5mini_interfaces


#ifndef _WIN32
# define DEPRECATED__fun5mini_interfaces__srv__EatCall_Response __attribute__((deprecated))
#else
# define DEPRECATED__fun5mini_interfaces__srv__EatCall_Response __declspec(deprecated)
#endif

namespace fun5mini_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct EatCall_Response_
{
  using Type = EatCall_Response_<ContainerAllocator>;

  explicit EatCall_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit EatCall_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    fun5mini_interfaces::srv::EatCall_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const fun5mini_interfaces::srv::EatCall_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fun5mini_interfaces::srv::EatCall_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fun5mini_interfaces::srv::EatCall_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fun5mini_interfaces::srv::EatCall_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fun5mini_interfaces::srv::EatCall_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fun5mini_interfaces::srv::EatCall_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fun5mini_interfaces::srv::EatCall_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fun5mini_interfaces::srv::EatCall_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fun5mini_interfaces::srv::EatCall_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fun5mini_interfaces__srv__EatCall_Response
    std::shared_ptr<fun5mini_interfaces::srv::EatCall_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fun5mini_interfaces__srv__EatCall_Response
    std::shared_ptr<fun5mini_interfaces::srv::EatCall_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EatCall_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const EatCall_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EatCall_Response_

// alias to use template instance with default allocator
using EatCall_Response =
  fun5mini_interfaces::srv::EatCall_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace fun5mini_interfaces

namespace fun5mini_interfaces
{

namespace srv
{

struct EatCall
{
  using Request = fun5mini_interfaces::srv::EatCall_Request;
  using Response = fun5mini_interfaces::srv::EatCall_Response;
};

}  // namespace srv

}  // namespace fun5mini_interfaces

#endif  // FUN5MINI_INTERFACES__SRV__DETAIL__EAT_CALL__STRUCT_HPP_
