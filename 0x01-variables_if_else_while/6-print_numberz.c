#include <stdio.h>

/**
 * main - a function that prints single numbers
 * from 0 on a new line
 * using only putchar twice
 * remember to use for loop, and increament
 * Return: 0 always
 */
int main(void)
{
	int n;

	for (n = '0'; n < '10'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
