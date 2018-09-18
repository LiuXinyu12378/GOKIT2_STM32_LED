#include "Hal_Led/led.h"

void ledinit(void)
{
	
  GPIO_InitTypeDef  GPIO_InitStructure;
  RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA,ENABLE);
  GPIO_InitStructure.GPIO_Pin =  GPIO_Pin_1;
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;		    // ??????
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;	
  GPIO_Init(GPIOA,&GPIO_InitStructure);
}

void ledOn(void)
{
GPIO_SetBits(GPIOA,GPIO_Pin_1);
}

void ledOff(void)
{
GPIO_ResetBits(GPIOA,GPIO_Pin_1);
}
	