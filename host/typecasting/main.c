/*
 * main.c
 *
 *  Created on: May 9, 2022
 *      Author: adeba, original from FastBit Embedded Brain Academy
 */


#include<stdio.h>

int main(void)
{

   unsigned char data = (char)0x1FFFFFFFA0B0 + 0x1245;

   float  result =  80 / (float)3 ;

   printf("Data : %u  result : %f \n",data , result);

}
