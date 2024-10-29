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

        # variable
        self.is_call = True

        self.get_logger().info(f'Node Spawn Target Start')

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
            target_x = random.uniform(0, 10.8)
            target_y = random.uniform(0, 10.8)
            self.pub_target(target_x,target_y)
            self.spawn_pizza(target_x,target_y)
            self.get_logger().info(f'Target Pose : x = {target_x} , y = {target_y}')

        return response

def main(args=None):
    rclpy.init(args=args)
    node = SpawnTargetNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()
