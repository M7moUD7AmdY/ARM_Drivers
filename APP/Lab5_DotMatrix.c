#include "STD_TYPES.h"
#include "GPIO_Interface.h"
#include "GPIO_Private.h"
#include "SYSTICK_Interface.h"
#include "RCC_Interface.h"
#include "NVIC_Interface.h"
#include "HLED_MATRIX_Interface.h"
void EXTI0_IRQHandlar(void);
void APP_voidDelayMs(u32 Copy_u32Delay);
//u8 seg_arr[10]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f};
u8 GLOB_u8DataArr[8] = {28, 34, 66, 68, 66, 34, 28, 0};//{0, 127, 73, 73, 65, 0, 0, 0} ;

void main(void)
{
	/*Step 1 : System Clock is 16 MHz From HSI*/
	RCC_voidInitSystemClk();

	/*Step 2 : Enable GPIO Peripherial Clock For Port A*/
	RCC_voidEnablePeripheralClock(AHB1,MRCC_PERIPHERAL_EN_GPIOA);

	/*Step 3 : Enable GPIO Peripherial Clock For Port B*/
    RCC_voidEnablePeripheralClock(AHB1,MRCC_PERIPHERAL_EN_GPIOB);

	/*Step 4 : Initialize For LED Matrix*/
    HLEDMAT_voidInit() ;

	/* Loop forever */
	while(1)
	{
      /*Send Data To Led Matrix*/
		HLEDMAT_voidDisplay(GLOB_u8DataArr) ;
	}

}


void EXTI0_IRQHandlar(void)
{

	GPIO_voidSetPinValue(PA,PIN0,HIGH);
	STK_voidSetBusyWait(1000);
	GPIO_voidSetPinValue(PA,PIN0,LOW);
	STK_voidSetBusyWait(1000);
}


void APP_voidDelayMs(u32 Copy_u32Delay)
{

   for(u32 i = 0 ; i <Copy_u32Delay * 300; i++ )
   {
	   asm("NOP") ;
   }
}

