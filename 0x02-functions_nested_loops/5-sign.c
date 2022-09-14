#include "main.h"

/**
 * print_sign - checks if the numbers are positive, negative or 0.
 * @n: the parameter that is passed into the above function
 * make use of if...elseif...else statement
 * Return: 1 if n is postive, 0 if n is zero and -1 if n is negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		return (-1);
	}
}
