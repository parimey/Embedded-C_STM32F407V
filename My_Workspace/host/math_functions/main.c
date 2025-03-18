/*
 * main.c
 *
 *  Created on: Mar 18, 2025
 *      Author: parimeydpatil
 */


#include <stdio.h>
#include "math.h"

int main()
{
	printf("Addition is: %d\n", math_add(243,565));

	printf("Subtraction is: %d\n", math_sub(243,565));

	printf("Multiplication is: %lld\n", math_mul(243,565));

	printf("Division is: %f\n", math_div(243,565));

	return 0;
}
