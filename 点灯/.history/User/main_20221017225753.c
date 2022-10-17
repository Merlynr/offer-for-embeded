#include "stm32f10x.h"

void LED_config(void)
{
    GPIO_InitTypeDef GPIO_InitStructure;
    RCC_APB2PeriphClockCmd(RCC_ABP2Periph_GPIOB, ENABLE);

    GPIO_InitStructure.GPIO_Mode = GPIO_MODE_Out_PP;
    GPIO_InitStructure.GPIO_Pin = GPIO_PIN_12;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(GPIOB,&GPIO_InitStructure);

}

int main(void)
{
    LED_config();
    GPIO_ResetBits(GPIOB,GPIO_BRR_BR12);
    while();

}
