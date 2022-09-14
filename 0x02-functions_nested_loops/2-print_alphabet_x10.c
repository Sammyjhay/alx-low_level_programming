#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabets
 * in lowercase
 * 10 times followed by a new line
 */

void print_alphabet_x10(void)
{
	char i, l;

	for (l = 0; l <= 9; l++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
	_putchar('\n');
	}
}
