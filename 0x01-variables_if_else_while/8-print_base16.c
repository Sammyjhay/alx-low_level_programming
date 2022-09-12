#include <stdio.h>

/**
 * main - a function that prints nuumbers in hexadecimal
 * remember to print all numbers in new line and use putchar twice
 * print 0-9 first then a-f
 * use for loop
 * Return: 0 always
 */

int main(void)
{
	char n;
	char x;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	for (x = 'a'; x <= 'f'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}

