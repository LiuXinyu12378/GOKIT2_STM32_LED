
#ifndef __LED_H
#define __LED_H
#include "stm32f10x_rcc.h"
#include "stm32f10x_gpio.h"

void ledinit(void);
void ledOn(void);
void ledOff(void);
#endif