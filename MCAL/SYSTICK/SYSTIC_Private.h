#ifndef SYSTICK_PRIVATE_H_
#define SYSTICK_PRIVATE_H_

#define STK_CTRL       (*(volatile u32*)(0xE000E010))
#define COUNTFLAG    16
#define CLKSOURCE    2
#define TICKINT      1
#define ENABLE       0
#define STK_LOAD       (*(volatile u32*)(0xE000E014+0x04))
#define STK_VAL        (*(volatile u32*)(0xE000E018+0x08))
#define STK_CALIB      (*(volatile u32*)(0xE000E01C+0x0C))







#endif
