#include "STD_TYPES.h"
#include "GPIO_Interface.h"
#include "GPIO_Private.h"
#include "SYSTICK_Interface.h"
#include "RCC_Interface.h"

void APP_voidDelayMs(u32 Copy_u32Delay);
u8 seg_arr[10]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f};
int main()
{
	RCC_voidEnablePeripheralClock(AHB1,0);
	GPIO_voidSetPinMode(PA,0,OUTPUT);
   	GPIO_voidSetPinType(PA,0,1);

	while(1)
	{


		STK_voidSetBusyWait(1);
		GPIO_voidSetPinValue(PA,PIN0,HIGH);
		STK_voidSetBusyWait(1);
		GPIO_voidSetPinValue(PA,PIN0,LOW);

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

