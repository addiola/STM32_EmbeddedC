/*
 * main.c
 *
 *  Created on: May 9, 2022
 *      Author: adeba, original from FastBit Embedded Brain Academy
 */


#include <stdio.h>

// function prototype
int function_add_numbers(int a , int b , int c );

int main()
{
	int result;

	result = function_add_numbers(12,13,0);

	printf("Sum = %d\n",result);


    return 0;
}

// This is function definition
int function_add_numbers(int a , int b , int c )
{
	 int sum ;
	 sum = a+b+c;

	 return sum;
}
