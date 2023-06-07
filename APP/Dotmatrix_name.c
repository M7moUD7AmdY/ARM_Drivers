#include "STD_Types.h"
#include "BIT_MATH.h"
#include "RCC_Interface.h"
#include "RCC_Private.h"
#include "GPIO_Interface.h"
#include "SYS_TICK_Interface.h"
#include "NVIC_Interface.h"
#include "EXTI_Interface.h"
#include "SSD_Interface.h"
#include "HDot_Matrix_Interface.h"


 u8 GLOB_u8DataArr[88] = {

	    4, 120, 8, 120, 8, 8, 120, 0, //m
		48, 72, 72, 240, 128, 0, 0, 0,//a
		0, 126, 8, 8, 120, 0, 0, 0, //h
		4, 120, 8, 120, 8, 8, 120, 0, //m
		0, 28, 34, 34, 34, 34, 28, 0, //o
		0, 0, 48, 72, 72, 127, 0, 0, //d
};


int main()
{
	RCC_void_Init_Sys_Clk();
	RCC_void_Enable_Peripheral_Clk( AHB1,  RCC_AHB1ENR_GPIOAEN);
	RCC_void_Enable_Peripheral_Clk( AHB1,  RCC_AHB1ENR_GPIOBEN);
	Dot_Matrix_void_Init();

  while (1)
    {

	  Dot_Matrix_void_Display_sliding(GLOB_u8DataArr);




    }



  return 0;
}




