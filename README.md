# led-voice-control
LED Voice Control using ESP32 LyraT and ESP-Skainet

This project allows us to control built-in LED to turning ON and OFF in ESP32 LyraT using speech command.

## Wake Word
This project using "Hi, Lexin!" as the wake word.

## Speech Command
- "Turn on the light!" for turning on the built-in LED.
- "Turn off the light!" for turning off the built-in LED.

## Build and Flash
Before compile and flash the code to the board, make sure you have configure anything the project. Type this in your terminal :
> make menuconfig

After that, simply type this command to build and flash the code to board. Make sure you are inside the project repository (where there is a Makefile) :
> make flash

To open the serial monitor in your terminal, type this command :
> make monitor
