#include "stm32f10x.h"

void LED_config(void)
{
    GPIO_InitTypeDef GPIO_InitStructure;
    RCC_APB2PeriphClockCmd(RCC_ABP2Periph_GPIOB, ENABLE);

    GPIO_InitStructure.GPIO_Mode = GPIO_MODE_Out_PP;
    

}

int main(void)
{

}
