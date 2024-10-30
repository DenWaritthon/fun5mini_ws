# FUN5/2: Mini project
ทำการสร้าง เกม โดยใช้ ประยุกต์ใข้ MICRO-ROS

![game_introl](/image/game_introl.gif)

## Table of Contents (TOC)
- [FUN5/2: Mini project](#fun52-mini-project)
  - [Table of Contents (TOC)](#table-of-contents-toc)
  - [Futures](#futures)
    - [System architecture](#system-architecture)
    - [Micro-ros (ling/cubemx\_node)](#micro-ros-lingcubemx_node)
    - [Controller\_node](#controller_node)
    - [spawn\_target\_node](#spawn_target_node)
    - [bot\_node](#bot_node)
  - [การเล่นเบื้องต้น](#การเล่นเบื้องต้น)
  - [การติดตั้ง](#การติดตั้ง)
    - [1. Clone Project from github](#1-clone-project-from-github)
      - [1.1 ติดตั้ง turtlesim\_plus อาจารย์ Pi](#11-ติดตั้ง-turtlesim_plus-อาจารย์-pi)
    - [2. Build Project](#2-build-project)
    - [3. Sourcs Project](#3-sourcs-project)
    - [4. Launch Project](#4-launch-project)
  - [ผู้จัดทำ](#ผู้จัดทำ)

## Demo Video
Click --> [Demo Video](https://youtu.be/1O6goDvm4eY)

## Futures 
เราสร้างเกมที่เต่าจะแข่งกันกินพิซซ่ากับบอทของเรา โดยนำ [Turtlesim_plus](https://github.com/tchoopojcharoen/turtlesim_plus) และ [Micro-Ros](https://micro.ros.org/) มาประยุกต์ในการสร้างเกมนี้ขึ้นมา

### System architecture
![system architecture](/image/system.png)

ระบบของเรามีทั้งหมด 6 Node 2 namespace
ได้แก่
* ling (namespace ของผู้เล่น)
  * ling/cubemx_node (micro-ros)
  * ling/controller_node
* bot (namespace ของbot)
  * bot/bot_node
  * bot/controller_node
* ไม่มี namespace
  * spawn_target_node
  * turtlesim+

### Micro-ros (ling/cubemx_node)
ตัว Micro ros จะส่ง topic
```bash
/ling/cmd_vel
```

* /ling/cmd_vel จะสร้าง cmd_vel เพื่อส่งค่าความเร็วไปควบคุมเต่า ling

และส่งSerive client

```bash
/ling/call_eat
```
* /ling/call_eat จะเป็น Service client เพื่อส่งคำส่งกินพิซซ่าในระยะ

โดยควบคุมผ่าน "funduino joystick shield"
![Funduino_joystick_shield](/image/fundruino_joy.jpg)
[รูปภาพจาก rajivelectronics](https://rajivelectronics.com/product/joystick-shield-expansion-board-3-3v-5v/)

### Controller_node
ตัว Controller จะ Sub topic
```bash
/namespace/pose
/target 
```

* /namespace/pose จะรับตำแหน่งของเต่า จาก namesapce ที่ตั้งไว้
* /target จะรับตำแหน่งของพิซซ่าที่จะเกิดขึ้น

และยังมี Service
```bash
/namespace/call_eat
/namespace/eat
/call_target 
```

* /namesapce/call_eat จะเป็น Serive server โดยจะรับคำสั่งเมื่อจะกิน แต่จะกินในระยะ

* /namespace/eat จะเป็น Service client จะ Call ไปหา turtlesim+ เพื่อกินพิซซ่าในระยะ

* /call_target จะเป็น Service client จะ call ไปหา spawn_target_node เพื่อเรืยกหา พิซซ่า

### spawn_target_node

ตัว spawn_target_node จะ pub topic 
```bash
/target
```

  * /target จะเป็น topic จะส่งตำแหน่งของ พิซซ่าที่จะเกิดขึ้นมา
  
และสร้าง service 

```bash
/call_target
/spawn_pizza
```

* /call_target จะเป็น Service Server ที่รับค่าเมื่อมี node bot หริอ ling เมื่อมีตัวใดตัวนึงกิน พิซซ่าเข้าไป
* /spawn_pizza จะเป็น Service client ที่จะส่งค่าเมื่อไปหา turtlesim+ เพื่อสร้างพิซซ่า

### bot_node
ตัว bot_node สร้าง topic
```bash
/bot/cmd_vel
/bot/pose
/target
```
* /bot/cmd_vel จะสร้าง cmd_vel เพื่อส่งค่าความเร็วไปควบคุมเต่า 
* /bot/pose จะรับตำแหน่งของเต่าเข้ามา
* /target จะรับตำแหน่งของพิซซ่าที่ถูกสร้างขี้น
  
และสร้าง service 

```bash
/bot/call_eat
```

* /bot/call_eat จะเป็น Serive server โดยจะรับคำสั่งเมื่อจะกิน แต่จะกินในระยะ

## การเล่นเบื้องต้น
 
เราจะควบคุมโดยใช้ก้าน Analog (วงสีฟ้า) เพื่อคุมคุมเต่า และปุ่ม B (วงสีม่วง) เพื่อเป็นการกิน

![วงก้านกับปุ่ม](/image/fundruino_joy_cri.JPG)

Analog
* ดันไป ด้านหน้า --> ไปข้างหน้า
* ดันไป ด้านหลัง --> ไปข้างหลัง
* ด้นไป ทางซ้าย --> ไปด้านซ้าย
* ดันไป ทางขาว --> ไปด้านขวา

ปุ่ม B
* กดปุ่ม --> กินในพิซซ่าในระยะ 

## การติดตั้ง

### 1. Clone Project from github
```bash
git clone https://github.com/DenWaritthon/fun5mini_ws

cd fun5mini_ws
```
ถ้ายังไม่มี turtlesim_plus ของอารจารย์ PI ให้ติดตั้งก่อน โดยสามารถติดตั้งได้ตาม [1.1 ติดตั้ง turtlesim_plus](#11-ติดตั้ง-turtlesim_plus-อาจารย์-pi) ถ้ามีแล้ว สามารถข้ามขั้นตอนนี้ได้ ไปที่ [2. Build Project](#2-build-project)

#### 1.1 ติดตั้ง turtlesim_plus อาจารย์ Pi
```bash
cd src/
git clone https://github.com/tchoopojcharoen/turtlesim_plus.git
cd ..
```

### 2. Build Project
ทำให้อยู้ใน Foler ws ของเราในที่นี้คือ fun5mini_ws
``` bash
#อยู่ที่ Folder fun5mini_ws
colcon build #optional --parallel-workers 2 
```
(--parallel-workers เพื่อเพิ่ม CPU ในการประมวลผล ตอนรันครั้งแรกจะประมวลไม่ทันแล้วคอมค้าง จะใช้หรือไม่ใช้ก็ได้)

### 3. Sourcs Project
```bash
source install/setup.bash 
```

### 4. Launch Project 
เรามี 3 ตัวเลือกได้แก่ 
  1. มีแค่ ling (คนเดียว) ไม่มี bot มาเล่นด้วย
   
```bash
ros2 launch turtle_game turtle_game_ling.launch.py
```

  2. มีแค่ bot ไม่มีคนมาเล่นด้วยมีแต่บอทมากินพิซซ่า
   
```bash
ros2 launch turtle_game turtle_game_bot.launch.py
```

  3. มีทั้ง ling และ bot สามารถเล่นพร้อมกันได้
   
```bash
ros2 launch turtle_game turtle_game_lingvsbot.launch.py
```

## ผู้จัดทำ

* 65340500004 ไกรวิชญ์ วิชาโคตร - [@ThepokKung](https://github.com/ThepokKung)
* 65340500050 วริทธิ์ธร คงหนู - [@DenWaritthon](https://github.com/DenWaritthon)
