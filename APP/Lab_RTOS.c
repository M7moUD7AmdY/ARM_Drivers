
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "GPIO_Interface.h"
#include "RCC_Interface.h"
#include "FreeRTOS.h"
#include "task.h"
#include "semphr.h"

SemaphoreHandle_t S1;


void task1(void)
{
	static u8 flag=0;
	while(1)
	{
		if(flag ==0)
		{
			GPIO_voidSetPinValue(PA,PIN0,HIGH);
			flag=1;
		}
		else
		{
			GPIO_voidSetPinValue(PA,PIN0,LOW);
			flag=0;
		}
		vTaskDelay(1000);
	}
}

void task2(void)
{
	static u8 flag=0;
	while(1)
	{
		if(flag ==0)
		{
			GPIO_voidSetPinValue(PA,PIN1,HIGH);
			flag=1;
		}
		else
		{
			GPIO_voidSetPinValue(PA,PIN1,LOW);
			flag=0;
		}
		vTaskDelay(2000);
	}
}

void task3(void)
{
	static u8 flag=0;
	while(1)
	{
		if(flag ==0)
		{
			GPIO_voidSetPinValue(PA,PIN2,HIGH);
			flag=1;
		}
		else
		{
			GPIO_voidSetPinValue(PA,PIN2,LOW);
			flag=0;
		}
		vTaskDelay(3000);
	}
}


int main()
{
	 RCC_voidInitSystemClk();
	 RCC_voidEnablePeripheralClock(AHB1,0);
     GPIO_voidSetPinMode(PA,PIN0,OUTPUT);
     GPIO_voidSetPinMode(PA,PIN1,OUTPUT);
     GPIO_voidSetPinMode(PA,PIN2,OUTPUT);
     GPIO_voidSetPinType(PA,PIN0,PUSH_PULL);
     GPIO_voidSetPinType(PA,PIN1,PUSH_PULL);
     GPIO_voidSetPinType(PA,PIN2,PUSH_PULL);

    xTaskCreate(&task1,0,50,0,1,0);
    xTaskCreate(task2,NULL,50,NULL,1,NULL);
    xTaskCreate(task3,NULL,50,NULL,1,NULL);

    vTaskStartScheduler();


	while(1)
	{

	}
	return 0;
}
