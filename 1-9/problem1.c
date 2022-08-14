/*
 * Author: John Song
 * Project: Project Euler
 * Exercise: 1
 * Prompt: If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
   Find the sum of all the multiples of 3 or 5 below 1000.
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define END		1000
#define START	3

int main(void)
{
	int num;
	int sum = 0;

	for (num = START; num < END; num++)
	{
		if (num % 3 == 0 || num % 5 == 0)
		{
			sum += num;
		}
	}
	printf("The sum is: %d", sum);

	return 0;
}

