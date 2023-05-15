#ifndef GPIO_PRIVATE_H_
#define GPIO_PRIVATE_H_
/*************************************************************/
//OFFSIT Address
#define MODE_OFFSET     0x00
#define OTYPER_OFFSET   0x04
#define OSPEEDR_OFFSET  0x08
#define PUPDR_OFFSET    0x0C
#define IDR_OFFSET      0x10
#define ODR_OFFSET      0x14
#define BSRR_OFFSET     0x18
#define AFRL_OFFSET     0x20
#define AFRH_OFFSET     0x24
/*************************************************************/
//GPIOA Base addres
#define BASE_APIOA_ADDRES  0x40020000 
//GPIOB
#define BASE_APIOB_ADDRES  0x40020400
//GPIOC 
#define BASE_APIOC_ADDRES  0x40020800

/*************************************************************/
//PORT A REG
//to set pin mode()
#define GPIOA_MODE_REG                 (*(volatile u32*)(MODE_OFFSET+  BASE_APIOA_ADDRES  ))
#define GPIOA_OTYPE_REG                (*(volatile u32*)(OTYPER_OFFSET+BASE_APIOA_ADDRES  ))
#define GPIOA_OSPEED_REG               (*(volatile u32*)(OSPEEDR_OFFSET+BASE_APIOA_ADDRES ))
#define GPIOA_PUPDR_REG                (*(volatile u32*)(PUPDR_OFFSET+ BASE_APIOA_ADDRES  ))
#define GPIOA_ID_REG                   (*(volatile u32*)(IDR_OFFSET+   BASE_APIOA_ADDRES  ))
#define GPIOA_OD_REG                   (*(volatile u32*)(ODR_OFFSET+   BASE_APIOA_ADDRES  ))
#define GPIOA_BSRR                     (*(volatile u32*)(BSRR_OFFSET+  BASE_APIOA_ADDRES  ))
#define GPIOA_AFRL                     (*(volatile u32*)(AFRL_OFFSET+  BASE_APIOA_ADDRES  ))
#define GPIOA_AFRH                     (*(volatile u32*)(AFRH_OFFSET+  BASE_APIOA_ADDRES  ))
/*************************************************************/
//PORT B REG
#define GPIOB_MODE_REG                 (*(volatile u32*)(MODE_OFFSET+ BASE_APIOB_ADDRES))
#define GPIOB_OTYPE_REG                (*(volatile u32*)(OTYPER_OFFSET+BASE_APIOB_ADDRES))
#define GPIOB_OSPEED_REG               (*(volatile u32*)(OSPEEDR_OFFSET+BASE_APIOB_ADDRES))
#define GPIOB_PUPDR_REG                (*(volatile u32*)(PUPDR_OFFSET+BASE_APIOB_ADDRES))
#define GPIOB_ID_REG                   (*(volatile u32*)(IDR_OFFSET+BASE_APIOB_ADDRES))
#define GPIOB_OD_REG                   (*(volatile u32*)(ODR_OFFSET+BASE_APIOB_ADDRES))
#define GPIOB_BSRR                     (*(volatile u32*)(BSRR_OFFSET+BASE_APIOB_ADDRES))
#define GPIOB_AFRL                     (*(volatile u32*)(AFRL_OFFSET+BASE_APIOB_ADDRES))
#define GPIOB_AFRH                     (*(volatile u32*)(AFRH_OFFSET+BASE_APIOB_ADDRES))
/*************************************************************/
//PORT C REG
#define GPIOC_MODE_REG                 (*(volatile u32*)(MODE_OFFSET+BASE_APIOC_ADDRES))
#define GPIOC_OTYPE_REG                (*(volatile u32*)(OTYPER_OFFSET+BASE_APIOC_ADDRES))
#define GPIOC_OSPEED_REG               (*(volatile u32*)(OSPEEDR_OFFSET+BASE_APIOC_ADDRES))
#define GPIOC_PUPDR_REG                (*(volatile u32*)(PUPDR_OFFSET+BASE_APIOC_ADDRES))
#define GPIOC_ID_REG                   (*(volatile u32*)(IDR_OFFSET+BASE_APIOC_ADDRES))
#define GPIOC_OD_REG                   (*(volatile u32*)(ODR_OFFSET+BASE_APIOC_ADDRES))
#define GPIOC_BSRR                     (*(volatile u32*)(BSRR_OFFSET+BASE_APIOC_ADDRES))
#define GPIOC_AFRL                     (*(volatile u32*)(AFRL_OFFSET+BASE_APIOC_ADDRES))
#define GPIOC_AFRH                     (*(volatile u32*)(AFRH_OFFSET+BASE_APIOC_ADDRES))


/*************************************************************/


#define  GPIOA_BASE_ADRESS      0x40020000                                          /*Base Address for GPIOA*/
#define  GPIOB_BASE_ADRESS      0x40020400                                          /*Base Address for GPIOB*/
#define  GPIOC_BASE_ADRESS      0x40020800                                          /*Base Address for GPIOC*/


#define GPIOA_MODER				*((volatile u32*)(GPIOA_BASE_ADRESS+0x00))            /*GPIO PortA Mode Register*/
#define GPIOB_MODER				*((volatile u32*)(GPIOB_BASE_ADRESS+0x00))            /*GPIO PortB Mode Register*/
#define GPIOC_MODER				*((volatile u32*)(GPIOC_BASE_ADRESS+0x00))            /*GPIO PortC Mode Register*/




#define GPIOA_OTYPER             *((volatile u32*)(GPIOA_BASE_ADRESS+0x04))           /*GPIO PortA Output Type Register*/
#define GPIOB_OTYPER             *((volatile u32*)(GPIOB_BASE_ADRESS+0x04))           /*GPIO PortB Output Type Register*/
#define GPIOC_OTYPER             *((volatile u32*)(GPIOC_BASE_ADRESS+0x04))           /*GPIO PortC Output Type Register*/


#define GPIOA_OSPEEDR            *((volatile u32*)(GPIOA_BASE_ADRESS+0x08))           /*GPIO PortA Output Speed Register*/
#define GPIOB_OSPEEDR            *((volatile u32*)(GPIOB_BASE_ADRESS+0x08))           /*GPIO PortB Output Speed Register*/
#define GPIOC_OSPEEDR            *((volatile u32*)(GPIOC_BASE_ADRESS+0x08))           /*GPIO PortC Output Speed Register*/

#define GPIOA_ODR			   	*((volatile u32*)(GPIOA_BASE_ADRESS+0x14))            /*GPIO PortA Output Data Register*/
#define GPIOB_ODR			   	*((volatile u32*)(GPIOB_BASE_ADRESS+0x14))            /*GPIO PortB Output Data Register*/
#define GPIOC_ODR			   	*((volatile u32*)(GPIOC_BASE_ADRESS+0x14))            /*GPIO PortC Output Data Register*/






#endif
