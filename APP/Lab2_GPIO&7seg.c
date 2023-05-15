#include "STD_TYPES.h"
#include "GPIO_Interface.h"
#include "GPIO_Private.h"

#include "RCC_Interface.h"

void APP_voidDelayMs(u32 Copy_u32Delay);
u8 seg_arr[10]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f};
int main()
{
	RCC_voidEnablePeripheralClock(AHB1,0);

	GPIO_voidSetPinMode(PA,0,OUTPUT);
   	GPIO_voidSetPinType(PA,0,1);

   	GPIO_voidSetPinMode(PA,1,OUTPUT);
  	GPIO_voidSetPinType(PA,1,1);

  	GPIO_voidSetPinMode(PA,2,OUTPUT);
  	GPIO_voidSetPinType(PA,2,1);

    GPIO_voidSetPinMode(PA,3,OUTPUT);
    GPIO_voidSetPinType(PA,3,1);

  	GPIO_voidSetPinMode(PA,4,OUTPUT);
  	GPIO_voidSetPinType(PA,4,1);

  	GPIO_voidSetPinMode(PA,5,OUTPUT);
  	GPIO_voidSetPinType(PA,5,1);


  	GPIO_voidSetPinMode(PA,6,OUTPUT);
  	GPIO_voidSetPinType(PA,6,1);

  	GPIO_voidSetPinMode(PA,7,OUTPUT);
  	GPIO_voidSetPinType(PA,7,1);

	while(1)
	{

		for(u8 i=0;i<8;i++)
		{
			GPIOA_ODR=~seg_arr[i];
			APP_voidDelayMs(10000);

		}


	}

	return 0;
}

void APP_voidDelayMs(u32 Copy_u32Delay)
{

   for(u32 i = 0 ; i <Copy_u32Delay * 300; i++ )
   {
	   asm("NOP") ;
   }
}

