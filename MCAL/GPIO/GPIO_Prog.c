

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "GPIO_CFG.h"
#include "GPIO_Interface.h"
#include "GPIO_Private.h"





void GPIO_voidSetPinMode(GPIO_PORT_type Copy_u8Port,u8 Copy_u8PinNumber,u8 Copy_u8PinMode)
{
	if(Copy_u8Port == PA)
	{
		switch (Copy_u8PinMode)
		{
		case INPUT:		CLR_BIT(GPIOA_MODER,(2*Copy_u8PinNumber));
				   	   	CLR_BIT(GPIOA_MODER,(2*Copy_u8PinNumber+1));break;

		case OUTPUT:	SET_BIT(GPIOA_MODER,(2*Copy_u8PinNumber));
						CLR_BIT(GPIOA_MODER,(2*Copy_u8PinNumber+1));break;


		case AF:		CLR_BIT(GPIOA_MODER,(2*Copy_u8PinNumber));
						SET_BIT(GPIOA_MODER,(2*Copy_u8PinNumber+1));break;


		case ANALOG:	SET_BIT(GPIOA_MODER,(2*Copy_u8PinNumber));
						SET_BIT(GPIOA_MODER,(2*Copy_u8PinNumber+1));break;

		}

	}
	else if(Copy_u8Port == PB)
	{
		switch (Copy_u8PinMode)
		{
		case INPUT:		CLR_BIT(GPIOB_MODER,(2*Copy_u8PinNumber));
				   	   	CLR_BIT(GPIOB_MODER,(2*Copy_u8PinNumber+1));break;

		case OUTPUT:	SET_BIT(GPIOB_MODER,(2*Copy_u8PinNumber));
						CLR_BIT(GPIOB_MODER,(2*Copy_u8PinNumber+1));break;


		case AF:		CLR_BIT(GPIOB_MODER,(2*Copy_u8PinNumber));
						SET_BIT(GPIOB_MODER,(2*Copy_u8PinNumber+1));break;


		case ANALOG:	SET_BIT(GPIOB_MODER,(2*Copy_u8PinNumber));
						SET_BIT(GPIOB_MODER,(2*Copy_u8PinNumber+1));break;


		}

	}
	else if(Copy_u8Port == PC)
	{
		switch (Copy_u8PinMode)
		{
		case INPUT:		CLR_BIT(GPIOC_MODER,(2*Copy_u8PinNumber));
				   	   	CLR_BIT(GPIOC_MODER,(2*Copy_u8PinNumber+1));break;

		case OUTPUT:	SET_BIT(GPIOC_MODER,(2*Copy_u8PinNumber));
						CLR_BIT(GPIOC_MODER,(2*Copy_u8PinNumber+1));break;


		case AF:		CLR_BIT(GPIOC_MODER,(2*Copy_u8PinNumber));
						SET_BIT(GPIOC_MODER,(2*Copy_u8PinNumber+1));break;


		case ANALOG:	SET_BIT(GPIOC_MODER,(2*Copy_u8PinNumber));
						SET_BIT(GPIOC_MODER,(2*Copy_u8PinNumber+1));break;


		}

	}

}

void GPIO_voidSetPinType(GPIO_PORT_type Copy_u8Port,u8 Copy_u8PinNumber,u8 Copy_u8PinType)
{
	if(Copy_u8PinType == PUSH_PULL)
	{
		switch (Copy_u8Port)
		{
			case PA:CLR_BIT(GPIOA_OTYPER,Copy_u8PinNumber);break;
			case PB:CLR_BIT(GPIOB_OTYPER,Copy_u8PinNumber);break;
			case PC:CLR_BIT(GPIOC_OTYPER,Copy_u8PinNumber);break;


		}

	}
	else if(Copy_u8PinType == OPEN_DRAIN)
	{
		switch (Copy_u8Port)
		{
			case PA:SET_BIT(GPIOA_OTYPER,Copy_u8PinNumber);break;
			case PB:SET_BIT(GPIOB_OTYPER,Copy_u8PinNumber);break;
			case PC:SET_BIT(GPIOC_OTYPER,Copy_u8PinNumber);break;

		}

	}


}

void GPIO_voidSetPinSpeed(GPIO_PORT_type Copy_u8Port,u8 Copy_u8PinNumber,u8 Copy_u8PinSpeed)
{
	if(Copy_u8Port == PA)
	{
		switch (Copy_u8PinSpeed)
		{
		case LOW_8MHz:			CLR_BIT(GPIOA_OSPEEDR,(2*Copy_u8PinNumber));
				   	   			CLR_BIT(GPIOA_OSPEEDR,(2*Copy_u8PinNumber+1));break;

		case MEDIUM_50MHz:		SET_BIT(GPIOA_OSPEEDR,(2*Copy_u8PinNumber));
								CLR_BIT(GPIOA_OSPEEDR,(2*Copy_u8PinNumber+1));break;


		case HIGH_80MHz:		CLR_BIT(GPIOA_OSPEEDR,(2*Copy_u8PinNumber));
								SET_BIT(GPIOA_OSPEEDR,(2*Copy_u8PinNumber+1));break;


		case VERY_HIGH_180MHz:		SET_BIT(GPIOA_OSPEEDR,(2*Copy_u8PinNumber));
								SET_BIT(GPIOA_OSPEEDR,(2*Copy_u8PinNumber+1));break;

		}

	}
	else if(Copy_u8Port == PB)
	{
		switch (Copy_u8PinSpeed)
		{
		case LOW_8MHz:			CLR_BIT(GPIOB_OSPEEDR,(2*Copy_u8PinNumber));
				   	   			CLR_BIT(GPIOB_OSPEEDR,(2*Copy_u8PinNumber+1));break;

		case  MEDIUM_50MHz:		SET_BIT(GPIOB_OSPEEDR,(2*Copy_u8PinNumber));
								CLR_BIT(GPIOB_OSPEEDR,(2*Copy_u8PinNumber+1));break;


		case HIGH_80MHz:		CLR_BIT(GPIOB_OSPEEDR,(2*Copy_u8PinNumber));
								SET_BIT(GPIOB_OSPEEDR,(2*Copy_u8PinNumber+1));break;


		case VERY_HIGH_180MHz:		SET_BIT(GPIOB_OSPEEDR,(2*Copy_u8PinNumber));
								SET_BIT(GPIOB_OSPEEDR,(2*Copy_u8PinNumber+1));break;

		}

	}
	else if(Copy_u8Port == PC)
	{
		switch (Copy_u8PinSpeed)
		{
		case LOW_8MHz:			CLR_BIT(GPIOC_MODER,(2*Copy_u8PinNumber));
				   	   			CLR_BIT(GPIOC_MODER,(2*Copy_u8PinNumber+1));break;

		case MEDIUM_50MHz:		SET_BIT(GPIOC_MODER,(2*Copy_u8PinNumber));
								CLR_BIT(GPIOC_MODER,(2*Copy_u8PinNumber+1));break;


		case HIGH_80MHz:		CLR_BIT(GPIOC_MODER,(2*Copy_u8PinNumber));
								SET_BIT(GPIOC_MODER,(2*Copy_u8PinNumber+1));break;


		case VERY_HIGH_180MHz:		SET_BIT(GPIOC_MODER,(2*Copy_u8PinNumber));
								SET_BIT(GPIOC_MODER,(2*Copy_u8PinNumber+1));break;

		}

	}

}

void GPIO_voidSetPinValue(GPIO_PORT_type Copy_u8Port,u8 Copy_u8PinNumber,u8 Copy_u8PinValue)
{

	if(Copy_u8Port == PA)
	{
		switch(Copy_u8PinValue)
		{
			case LOW:CLR_BIT(GPIOA_ODR,Copy_u8PinNumber);break;
			case HIGH:SET_BIT(GPIOA_ODR,Copy_u8PinNumber);break;
		}

	}
	else if(Copy_u8Port == PB)
	{
		switch(Copy_u8PinValue)
		{
			case LOW:CLR_BIT(GPIOB_ODR,Copy_u8PinNumber);break;
			case HIGH:SET_BIT(GPIOB_ODR,Copy_u8PinNumber);break;
		}

	}
	else if(Copy_u8Port == PC)
	{
		switch(Copy_u8PinValue)
		{
			case LOW:CLR_BIT(GPIOC_ODR,Copy_u8PinNumber);break;
			case HIGH:SET_BIT(GPIOC_ODR,Copy_u8PinNumber);break;
		}

	}

}

u8 GPIO_u8GetPinValue(GPIO_PORT_type Copy_u8Port,u8 Copy_u8PinNumber)
{
	u8 Local_u8PinReading=0;
	switch(Copy_u8Port)
	{
		case PA:Local_u8PinReading=GET_BIT(PA,Copy_u8PinNumber);break;
		case PB:Local_u8PinReading=GET_BIT(PB,Copy_u8PinNumber);break;
		case PC:Local_u8PinReading=GET_BIT(PC,Copy_u8PinNumber);break;
	}

     return Local_u8PinReading;

}
