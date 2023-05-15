#ifndef GPIO_INTERFACE_H_
#define  GPIO_INTERFACE_H_


typedef enum{
PA=0,
PB,
PC
}GPIO_PORT_type;



#define PIN0            0
#define PIN1            1
#define PIN2            2
#define PIN3            3
#define PIN4            4
#define PIN5            5
#define PIN6            6
#define PIN7            7
#define PIN8            8
#define PIN9            9
#define PIN10           10
#define PIN11           11
#define PIN12           12
#define PIN13           13
#define PIN14           14
#define PIN15           15
#define PIN16           16



typedef enum{
INPUT=0,
OUTPUT=1,
AF=2,
ANALOG=3
}PIN_MODE_type;

typedef enum{
LOW_8MHz,
MEDIUM_50MHz,
HIGH_80MHz,
VERY_HIGH_180MHz
}OUTPUT_SPEED_type;


typedef enum{
PUSH_PULL=0,
OPEN_DRAIN=1
}OUTPUT_PIN_type;


typedef enum{
 NO_PULL_IN,
 PULL_UP,
 PULL_DOWN,
}INPUT_PIN_type;

typedef enum{
    LOW=0,
    HIGH=1
}PIN_VALUE_type;



void GPIO_voidSetPinMode(GPIO_PORT_type Copy_u8Port,u8 Copy_u8PinNumber,u8 Copy_u8PinMode);

void GPIO_voidSetPinType(GPIO_PORT_type Copy_u8Port,u8 Copy_u8PinNumber,u8 Copy_u8PinType);

void GPIO_voidSetPinSpeed(GPIO_PORT_type Copy_u8Port,u8 Copy_u8PinNumber,u8 Copy_u8PinSpeed);

void GPIO_voidSetPinValue(GPIO_PORT_type Copy_u8Port,u8 Copy_u8PinNumber,u8 Copy_u8PinValue);

u8 GPIO_u8GetPinValue(GPIO_PORT_type Copy_u8Port,u8 Copy_u8PinNumber);


#endif
