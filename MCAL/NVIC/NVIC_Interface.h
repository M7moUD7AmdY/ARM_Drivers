            
#ifndef NVIC_INTERFACE_H_
#define NVIC_INTERFACE_H_

typedef struct{
volatile u32 ISER[32];
volatile u32 ICER[32];
volatile u32 ISPR[32];
volatile u32 ICPR[32];
volatile u32 IABR[32];
volatile u32 RES[32];
volatile u8 IPR[240];
}NVIC_type;


#define NVIC  ((volatile NVIC_type*)0xE000E100)
#define AIRCR   (*(volatile NVIC_type*)0xE000ED0C)
void NVIC_voidEnableINT(u8 copy_u8IntID);
void NVIC_voidDisableINT(u8 copy_u8IntID);
void NVIC_voidSetPendingFlag(u8 copy_u8IntID);
void NVIC_voidClrPendingFlag(u8 copy_u8IntID);
void NVIC_voidSetPriortyCFG(u8 copy_u8PeriortyOption);
void NVIC_voidSetIntPriorty(u8 copy_u8IntID,u8 copyu8IntGroup,u8 copy_u8SupGroup);






#endif 
