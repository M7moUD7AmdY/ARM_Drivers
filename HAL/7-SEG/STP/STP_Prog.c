#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "STP_CFG.h"
#include "STP_Interface.h"
#include "STP_Private.h"
#include "GPIO_Interface.h"


void STP_voidInit()
{
    GPIO_voidSetPinMode(STP_SERIAL_DATA,1);
	GPIO_voidSetPinType(STP_SERIAL_DATA,PUSH_PULL);

    GPIO_voidSetPinMode(STP_STORE_DATA,1);
	GPIO_voidSetPinType(STP_STORE_DATA,PUSH_PULL);

    GPIO_voidSetPinMode(STP_SHIFT_DATA,1);
	GPIO_voidSetPinType(STP_SHIFT_DATA,PUSH_PULL);



}
void STP_voidSendSYNC(u8 data)
{
    s8 Local_Counter;
  u8 Local_8Bit;

    for(Local_Counter=7;Local_Counter>=0;Local_Counter--)
      {
        Local_8Bit=GET_BIT(data,Local_Counter);
        


      }


}