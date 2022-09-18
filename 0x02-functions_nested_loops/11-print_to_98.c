#include <stdio.h>
#include "main.h"

/**
 * main - this function
 * print_to_98 - this function prints all numbers to 98
 * @n: parameter to be paased into the above function
 */

void print_to_98(int n)
{
	for (n < 0; n <= 98; n++)
	{
		if (n < 98)
			printf("%d, ", n);
		else
			printf("%d\n", n);
	}
	for (n > 0; n > 98; n--)
	{
		printf("%d, ", n);
	}
}
