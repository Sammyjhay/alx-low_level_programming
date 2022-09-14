#include "main.h"

/**
 * print_last_digit - prints the last digit of an argument
 * @j: the parameter passed into the function
 * Return: returns the last digit of the parameter
 */

int print_last_digit(int j)
{
	int i;

	i = j % 10;
	if (i < 0)
	{
		return (-i);
	}
	_putchar(i + '0');
	return (i);
}
