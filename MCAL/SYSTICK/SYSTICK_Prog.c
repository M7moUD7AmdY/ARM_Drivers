
#include "SYSTIC_Interface.h"
#include "SYSTIC_Private.h"
#include "SYSTIC_CFG.h"

static void (*STK_CallBack)(void)=0;


void STK_voidInit (void)
{
    CLR_BIT(STK_CTRL,ENABLE);
    #if SYSTIC_CLOCK == AHB
    SET_BIT(STK_CTRL,CLKSOURCE);
    #else
    CLR_BIT(STK_CTRL,CLKSOURCE);

}
void STK_voidSetBusyWait(u32 Copy_u32TimeMs)
{
   STK_LOAD= Copy_u32TimeMs;
   SET_BIT(STK_CTRL,ENABLE);
   while(!READ_BIT(STK_CTRL,COUNTFLAG));
   CLR_BIT(STK_CTRL,ENABLE);
   STK_LOAD= 0;
   STK_VAL=0;

}
void STK_voidSetIntervalSingle(u32 Copy_u32TimeMs,void (*Copy_ptr)(void))
{
    CLR_BIT(STK_CTRL,ENABLE);
    STK_VAL=0;
    STK_LOAD=Copy_u32TimeMs;
    SET_BIT(STK_CTRL,ENABLE);
    STK_CallBack=Copy_ptr;


    SET_BIT(STK_CTRL,TICKINT);





}
void STK_voidSetIntervalPeriodic(u32 Copy_u32TimeMs,void (*Copy_ptr)(void))
{ 
    STK_LOAD=Copy_u32TimeMs;
    SET_BIT(STK_CTRL,ENABLE);
    STK_CallBack=Copy_ptr;


    SET_BIT(STK_CTRL,TICKINT);



}
void STK_voidStopInterval (void)
{



}
u32 STK_u32GetElapsedTime (void)
{
   return (STK_LOAD-STK_VAL);
}
u32 STK_u32GetRemainingTime(void)
{

 return STK_VAL;
    
}
