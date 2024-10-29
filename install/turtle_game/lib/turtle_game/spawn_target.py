#!/usr/bin/python3

import rclpy
from rclpy.node import Node
from turtlesim.msg import Pose
from turtlesim_plus_interfaces.srv import GivePosition
from fun5mini_interfaces.srv import *

import random


class SpawnTargetNode(Node):
    def __init__(self):
        super().__init__('spawn_target_node')

        # service server
        self.create_service(TargetCall, '/call_target', self.call_target_callback)

        # service client
        self.spawn_pizza_client = self.create_client(GivePosition, '/spawn_pizza')

        # publisher
        self.target_pub = self.create_publisher(Pose, '/target', 10)

        # timer
        self.dt = 0.01
        self.create_timer(self.dt, self.target_loop)

        # variable
        self.is_call = True
        self.random_target()

        self.get_logger().info(f'Node Spawn Target Start')
        self.spawn_pizza(self.target_x,self.target_y)
        
    def random_target(self):
        self.target_x = random.uniform(0, 10.8)
        self.target_y = random.uniform(0, 10.8)

    def pub_target(self, x, y):
        pose = Pose()
        pose.x = x
        pose.y = y
        self.target_pub.publish(pose)
    
    def spawn_pizza(self, x, y):
        position_request = GivePosition.Request()
        position_request.x = x
        position_request.y = y
        self.spawn_pizza_client.call_async(position_request)

    def call_target_callback(self, request:TargetCall.Request, response:TargetCall.Response):
        if request.call:
            self.random_target()
            self.spawn_pizza(self.target_x,self.target_y)
            self.get_logger().info(f'Target Pose : x = {self.target_x} , y = {self.target_y}')
        
        return response

    def target_loop(self):
        self.pub_target(self.target_x,self.target_y)

def main(args=None):
    rclpy.init(args=args)
    node = SpawnTargetNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()
