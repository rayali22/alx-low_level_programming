#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: finds and prints the sum of the even-valued terms
 *
 * Return: ALways 0 (Success)
*/

int main(void)
{

	unsigned long int fib1 =0, fib2 = 1, sum;

	while (1)
	{
		sum = fib1 + fib2;

		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			total_sum += sum;

		fib1 = fib2;
		fib2 = sum;
	}

	printf("%.0f\n", total_sum);

	return (0);
}
