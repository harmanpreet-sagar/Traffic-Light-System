# Traffic Light System

## Description

This program consists of a traffic lights system. The three lights (green, yellow, and red) are traffic lights, and the other two lights (yellow light, green light) are pedestrian lights. The green traffic and pedestrian lights switch on for 15 seconds per cycle. The yellow lights switch on after the green lights. The yellow traffic light stays on for 3 seconds, whereas the yellow pedestrian light flashes on and off for the 3-second duration. The red traffic light and the yellow pedestrian light follow the yellow lights. The red traffic light and yellow pedestrian light remain on for 15 seconds. The yellow pedestrian light stays on continuously without flashing. This remains on unless the button is pressed. Once the button is pressed the lights change back to green within three seconds. If the red traffic light and the yellow pedestrian light are in the final three seconds of their 15-second cycle, the time from button would not add on and the lights would change at the maximum of 15 seconds. The whole process is 33 seconds in length if it is uninterrupted. 

This program was created using a breadboard to create the circuit and an Arduino to control the circuit. The program for the Arduino was written in C++.

## Circuit

![Complete Circuit](https://github.com/harmanpreet-sagar/Traffic-Light-System/blob/b0810d751e781f8b607920f97e9e5f293225dc89/IMG-20210304-WA0001.jpg)

_Figure 1: Complete Circuit_

![Arduino Close-Up](https://github.com/harmanpreet-sagar/Traffic-Light-System/blob/b0810d751e781f8b607920f97e9e5f293225dc89/IMG-20210304-WA0002.jpg)

_Figure 2: Close-up of the Arduino wiring_

![Circuit Close-Up](https://github.com/harmanpreet-sagar/Traffic-Light-System/blob/b0810d751e781f8b607920f97e9e5f293225dc89/IMG-20210304-WA0003.jpg)

_Figure 3: Close-up of the Breadboard wiring_
