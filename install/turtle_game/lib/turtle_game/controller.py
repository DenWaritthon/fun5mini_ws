#!/usr/bin/python3

import rclpy
from rclpy.node import Node

from std_srvs.srv import Empty

from fun5mini_interfaces.srv import *


class ControllerNode(Node):
    def __init__(self):
        super().__init__('controller_node')

        # service server
        self.create_service(EatCall, 'call_eat', self.eat_acction_callback)

        # service client
        self.eat_client = self.create_client(Empty, 'eat')

    def eat_acction_callback(self, request:EatCall.Request, response:EatCall.Response):
        if request.eat:
            eat_msg = Empty.Request()
            self.eat_client.call_async(eat_msg)
            
        return response
        

def main(args=None):
    rclpy.init(args=args)
    node = ControllerNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()
