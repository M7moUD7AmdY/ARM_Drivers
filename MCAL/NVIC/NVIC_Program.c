#include "STD_TYPES.h"
#include "LIB_MATH.h"
#include "NVIC_Interface.h"
#include "NVIC_Private.h"
#include "NVIC_Config.h"


void NVIC_voidEnableINT(u8 copy_u8IntID)
{
   NVIC -> ISER[(copy_u8IntID/32)]=(1<<(copy_u8IntID%32));
}

void NVIC_voidDisableINT(u8 copy_u8IntID)
{
   NVIC -> ICER[(copy_u8IntID/32)]=(1<<(copy_u8IntID%32));
}

void NVIC_voidSetPendingFlag(u8 copy_u8IntID)
{
  NVIC -> ISPR[(copy_u8IntID/32)]=(1<<(copy_u8IntID%32));
}

void NVIC_voidClrPendingFlag(u8 copy_u8IntID)
{
   NVIC -> ICPR[(copy_u8IntID/32)]=(1<<(copy_u8IntID%32));
}

void NVIC_voidSetPriortyCFG(u8 copy_u8PeriortyOption)
{
     SCB->AIRCR=KEY|(PRIORTY_CFG<<8);
}

void NVIC_voidSetIntPriorty(u8 copy_u8IntID,u8 copyu8IntGroup,u8 copy_u8SupGroup)
{
	u8 local_u8Periorty = copy_u8SupGroup |(copyu8IntGroup<<((PRIORTY_CFG-0x05FA0300)/256)) ;
   NVIC _>IPR[copy_u8IntID]=(Local_u8Periorty<<4);
}