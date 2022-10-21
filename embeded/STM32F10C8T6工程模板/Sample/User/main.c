//#include "stm32f10x.h"                  // Device header

#define RCCAPB2ENR (*(volatile unsigned long *)0x40021018)
#define GPIACRL (*(volatile unsigned long *)0x40010800)
#define GPIAODR (*(volatile unsigned long *)0x4001080C)



void Delay(unsigned long);
int main(void)
{
	// RCC_APB2 ENR , bit[2] =1 GPIA
	// *(unsigned long *)0x40021018 |= (1 << 2);
	RCCAPB2ENR |= (1 << 2);

	// GPIO_CRL = (unsigned long *)0x40010800 + ODRy
	// *(unsigned long *)0x40010800 &= (0xFFF0000F); // clear others[19:4] to zero
	// *(unsigned long *)0x40010800 |= 0x00033330; // conf [19:4] GPIO4-1 mode push-pull 50MHz
	GPIACRL &= (0xFFF0000F); 
	GPIACRL |= 0x00033330;

	// *(unsigned long *)0x4001080C &= ~((1<<1)|(1<<2)|(1<<3)|(1<<4)); // PA1~PA4 out low electron , all close
	GPIAODR &= ~((1<<1)|(1<<2)|(1<<3)|(1<<4));

	while (1)
	{	
		// open LED PA1-4, out high pin
		GPIAODR |= ((1<<1)|(1<<2)|(1<<3)|(1<<4));
		Delay(0xFFFF);
		// close LED, out low pin
		GPIAODR &= ~((1<<1)|(1<<2)|(1<<3)|(1<<4));
		Delay(0xFFFF);
	}
}
//delay time
void Delay(unsigned long nCount)
{
	while(nCount--);
}
