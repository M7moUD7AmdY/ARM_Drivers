#ifndef SYSTICK_INTERFACE_H_
#define SYSTICK_INTERFACE_H_

void STK_voidInit (void);
void STK_voidSetBusyWait(u32 Copy_u32TimeMs);
void STK_voidSetIntervalSingle(u32 Copy_u32TimeMs,void (*Copy_ptr)(void));
void STK_voidSetIntervalPeriodic(u32 Copy_u32TimeMs,void (*Copy_ptr)(void));
void STK_voidStopInterval (void);
u32 STK_u32GetElapsedTime (void);
u32 STK_u32GetRemainingTime (void);




#endif