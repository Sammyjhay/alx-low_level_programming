#include "main.h"

/**
 * print_numbers - prints all numbers from 0 to 9
 * Return: 0 always
 */
void print_numbers(void)
{
	int n;

	while (n >= 0)
	{
		_putchar(n + '0');
		n++;
	}
	_putchar('\n');
}
