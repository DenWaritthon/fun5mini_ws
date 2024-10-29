#!/usr/bin/python3

import rclpy
from rclpy.node import Node

from std_srvs.srv import Empty
from turtlesim.msg import Pose
from fun5mini_interfaces.srv import *

import numpy as np


class ControllerNode(Node):
    def __init__(self):
        super().__init__('controller_node')

        # service server
        self.create_service(EatCall, 'call_eat', self.eat_acction_callback)

        # service client
        self.eat_client = self.create_client(Empty, '/turtle1/eat')
        self.spawn_target_client = self.create_client(TargetCall, '/call_target')

        # subscription
        self.create_subscription(Pose, '/turtle1/pose', self.pose_callback, 10)
        self.create_subscription(Pose, '/target', self.target_callback, 10)

        # variable
        self.robot_pose = [0.0 , 0.0]
        self.target_pose = [0.0 , 0.0]

        self.get_logger().info(F'Node Controller Start')

    def eat_acction_callback(self, request:EatCall.Request, response:EatCall.Response):
        if request.call:
            eat_msg = Empty.Request()
            dx = abs(self.robot_pose[0] - self.target_pose[0])
            dy = abs(self.robot_pose[1] - self.target_pose[1])
            d = np.sqrt(dx**2 + dy**2)

            self.get_logger().info(F'target_x : {self.target_pose[0]} , target_y : {self.target_pose[1]}')
            self.get_logger().info(F'pose_x : {self.robot_pose[0]} , pose_y : {self.robot_pose[1]}')

            self.get_logger().info(F'dx : {dx} , dy : {dy} , d : {d}')

            if d < 0.5:
                self.eat_client.call_async(eat_msg)
                self.spawn_target(True)

        return response
    
    def spawn_target(self, call):
        msg = TargetCall.Request()
        msg.call = True
        self.spawn_target_client.call_async(msg)
    
    def pose_callback(self, msg:Pose):
        self.robot_pose[0] = msg.x
        self.robot_pose[1] = msg.y

    def target_callback(self, msg:Pose):
        self.target_pose[0] = msg.x
        self.target_pose[1] = msg.y
        

def main(args=None):
    rclpy.init(args=args)
    node = ControllerNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()
