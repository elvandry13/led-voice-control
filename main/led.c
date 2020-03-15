#include "led.h"

#define gpio 22

void led_init()
{
    gpio_config_t io_conf;
    io_conf.intr_type = (gpio_int_type_t) GPIO_PIN_INTR_DISABLE;
    io_conf.mode = GPIO_MODE_OUTPUT;
    io_conf.pull_up_en = (gpio_pullup_t) 1;

    uint64_t test = ((uint64_t)1 << gpio);
    io_conf.pin_bit_mask = test;
    gpio_config(&io_conf);
    gpio_set_level(gpio, 0);
}

void led_on()
{
    gpio_set_level(gpio, 1);
}

void led_off()
{
    gpio_set_level(gpio, 0);
}
