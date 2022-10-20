//#include "stm32f10x.h"                  // Device header

int main(void)
{
	// GPIO_CRL = (unsigned long *)0x40010800 + ODRy
	*(unsigned long *)0x40010800 &= (0xFFF0000F); // clear others[19:4] to zero
	*(unsigned long *)0x40010800 |= 0x00033330; // conf [19:4] GPIO4-1 mode push-pull 50MHz
}
