/*
 * KeyPad_prog.c
 *
 * Created: 4/6/2023 12:04:53 PM
 *  Author: imahm
 */ 


#include "KeyPad_interface.h"

void KeyPad_Init(void)
{
	u8 i;
	for (i=0;i<ROWS;i++)
	{
		DIO_WritePin(RowsPinsArr[i],HIGH);
	}
	
}

u8 KeyPad_GetKey(void)
{
	u8 r,c,key=NO_KEY;
	for (r=0;r<ROWS;r++)
	{
		DIO_WritePin(RowsPinsArr[r],LOW);
		for (c=0;c<COLS;c++)
		{
			if (SW_Read(ColsPinsArr[c])==LOW)
			{
				key=KeysArr[r][c];
				while(SW_Read(ColsPinsArr[c])==LOW);
			}
		}
		DIO_WritePin(RowsPinsArr[r],HIGH);
		
	}
	return key;	
}
