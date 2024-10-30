# FUN5/2: Mini project
ทำการสร้าง เกม โดยใช้ ประยุกต์ใข้ MICRO-ROS

![game_introl](/image/game_introl.gif)

## Table of Contents (TOC)
- [FUN5/2: Mini project](#fun52-mini-project)
  - [Table of Contents (TOC)](#table-of-contents-toc)
  - [Futures](#futures)
    - [System architecture](#system-architecture)
    - [Micro-ros](#micro-ros)
  - [การเล่นเบื้องต้น](#การเล่นเบื้องต้น)
  - [การติดตั้ง](#การติดตั้ง)
    - [1. Clone Project from github](#1-clone-project-from-github)
      - [1.1 ติดตั้ง turtlesim\_plus อาจารย์ Pi](#11-ติดตั้ง-turtlesim_plus-อาจารย์-pi)
      - [2. Build Project](#2-build-project)
      - [3. Sourcs Project](#3-sourcs-project)
      - [4. Launch Project](#4-launch-project)

## Futures 
เราสร้างเกมที่เต่าจะแข่งกันกินพิซซ่ากับบอทของเรา โดยนำ [Turtlesim_plus](https://github.com/tchoopojcharoen/turtlesim_plus) และ Micro-Ros มาประยุกต์ในการสร้างเกมนี้ขึ้นมา

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

### Micro-ros
ตัว Micro ros จะส่ง topic
```
/ling/cmd_vel
```
เพื่อเป็นการส่งการควบคุมให้กับ Turtsim_plus และส่งSerive client
```
/ling/call_eat
```
เพื่อเป็นการกินพิซซ่า

โดยควบคุมผ่าน "funduino joystick shield"
![Funduino_joystick_shield](/image/fundruino_joy.jpg)
[รูปภาพจาก rajivelectronics](https://rajivelectronics.com/product/joystick-shield-expansion-board-3-3v-5v/)

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

#### 2. Build Project
ทำให้อยู้ใน Foler ws ของเราในที่นี้คือ fun5mini_ws
``` bash
#ใน Folder fun5mini_ws
colcon build #optional --parallel-workers 2 
```
(--parallel-workers เพื่อเพิ่ม CPU ในการประมวลผล ตอนรันครั้งแรกจะประมวลไม่ทันแล้วคอมค้าง จะใช้หรือไม่ใช้ก็ได้)

#### 3. Sourcs Project
```bash
source install/setup.bash 
```

#### 4. Launch Project 
```bash
ros2 launch turtle_game turtle_game_lingvsbot.launch.py
```