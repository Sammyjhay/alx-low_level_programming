#include <stdio.h>

/**
 * main - a function that prints single digit numbers in a new line
 * and also adds a comma except after the last single digit
 * Return: 0 always
 */

int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i == '9')
		{
			putchar('\n');
			return (0);
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
