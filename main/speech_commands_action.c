/*
   This example code is in the Public Domain (or CC0 licensed, at your option.)

   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "speech_commands_action.h"
#include "led.h"

void speech_commands_action(int command_id)
{
    printf("Commands ID: %d.\n", command_id);
    switch (command_id) {
    case 0:
        printf("\n-TURN ON-\n");
        led_on();
        break;
    case 1:
        printf("\n-TURN OFF-\n");
        led_off();
        break;
    // ...
    default:
        break;
    }
}
