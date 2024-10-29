from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import ExecuteProcess

def generate_launch_description():

    luanch_description = LaunchDescription()

    turtlesim_node = Node(
            package = 'turtlesim_plus',
            namespace = '',
            executable = 'turtlesim_plus_node.py',
            name = 'turtlesim'
        )
    luanch_description.add_action(turtlesim_node)

    turtle_kill = 'turtle1'
    kill = ExecuteProcess(
            cmd=[[
                'ros2 service call ',
                '/remove_turtle ',
                'turtlesim/srv/Kill ',
                f'"{{ name: {turtle_kill} }}"'
            ]],
            shell = True
        )
    luanch_description.add_action(kill)

    package_name = 'turtle_game'
    # executable_name = ['controller.py', 'bot.py']
    name = ['controller', 'bot']
    namespace = ['ling','bot']
    turtle_pose = [[10,0.5,3.14],[0.5,0.5,0.0]]

    for i in range(len(namespace)):
        turtle_call = ExecuteProcess(
            cmd=[[
                'ros2 service call ',
                '/spawn_turtle ',
                'turtlesim/srv/Spawn ',
                f'"{{ x: {turtle_pose[i][0]}, y: {turtle_pose[i][1]}, theta: {turtle_pose[i][2]}, name: {namespace[i]} }}"'
            ]],
            shell=True
        )
        luanch_description.add_action(turtle_call)

    spawn_node = Node(
            package = package_name,
            namespace = '',
            executable = 'spawn_target.py',
            name = 'spawn_target'
        )
    luanch_description.add_action(spawn_node)

    ling_node = Node(
        package = package_name,
        namespace = namespace[0],
        executable = f'{name[0]}.py',
        name = f'{name[0]}_node'
    )
    luanch_description.add_action(ling_node)

    for n in name:
        node = Node(
            package = package_name,
            namespace = namespace[1],
            executable = f'{n}.py',
            name = f'{n}_node'
        )
        luanch_description.add_action(node)

    return luanch_description