#include "main.h"
#include <stdio.h>

/**
 * numLength - returns the lenght of string
 *
 * @num; operand number
 *
 * Return: number of digits
*/

int numLenght(int num)
{
	int length = 0;

	if (!num)
		return (1);

	while (num)
	{
		num = num / 10;
		length += 1;
	}
	
	return (length);
}

/**
 * main _ The main function
 * 1 and 2, seperated by a comma
 * Return: 0.
*/

int main(void)
{
	int count, initial0s;
	unsigned long f1 = 1, f2 = 2, sum, mx = 100000000, f1o = 0, f2o = 0, sumo = 0;

	if (f1o > 0)
		 printf("%lu", f1o);
	initial0s = numLength(mx) - 1 -numLength(f1);

	while (f1o > 0 && initial10s > 0)
	{
		printf("%d", o);
		initial0s--;
	}
	printf("%lu", f1);

	sum = (f1 + f2) % mx;
	sumo = f1o + f2o + (f1 + f2) / mx;
	f1 = f2;
	f1o = f20;
	f2 = sum;
	f2o = sumo;

	if (count !=98)
		printf(", ");
	else
		printf("\n");
	}
	return (0);
}
