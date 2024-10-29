#!/usr/bin/python3

import rclpy
from rclpy.node import Node
from turtlesim.msg import Pose
from turtlesim_plus_interfaces.srv import GivePosition
import random


class SpawnTargetNode(Node):
    def __init__(self):
        super().__init__('spawn_target_node')

        # service client
        self.spawn_pizza_client = self.create_client(GivePosition, '/spawn_pizza')

        # publisher
        self.target_pub = self.create_publisher(Pose, '/target', 10)

        # timer
        self.dt = 0.01
        self.create_timer(self.dt, self.target_loop)

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

    def target_loop(self):
        n = input("input :")
        if (n == 'a'):
            target_x = random.uniform(0, 10.8)
            target_y = random.uniform(0, 10.8)

            self.pub_target(target_x,target_y)
            self.spawn_pizza(target_x,target_y)

            self.get_logger().info(f'Published Pose : x = {target_x} , y = {target_y}')

def main(args=None):
    rclpy.init(args=args)
    node = SpawnTargetNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()
