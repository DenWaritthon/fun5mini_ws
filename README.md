# FUN5/2: Mini project
ทำการสร้าง เกม โดยใช้ ประยุกต์ใข้ MICRO-ROS

![game_introl](/image/game_introl.gif)

## Table of Contents (TOC)
- [FUN5/2: Mini project](#fun52-mini-project)
  - [Table of Contents (TOC)](#table-of-contents-toc)
  - [Futures](#futures)
    - [Micro-ros](#micro-ros)
  - [การเล่นเบื้องต้น](#การเล่นเบื้องต้น)

## Futures 
เราสร้างเกมที่เต่าจะแข่งกันกินพิซซ่ากับบอทของเรา โดยนำ [Turtlesim_plus](https://github.com/tchoopojcharoen/turtlesim_plus) และ Micro-Ros มาประยุกต์ในการสร้างเกมนี้ขึ้นมา

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
 
เราจะควบคุมโดยใช้ก้าน Analog เพื่อคุมคุมเต่า และปุ่ม B เพื่อเป็นการกิน
