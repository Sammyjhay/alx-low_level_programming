#include <stdio.h>

/**
 * main - a function that prints the alphabets
 * in lower case and in reverse order
 * from z to a shows decreament z-- and use putchar twice
 * print each alphabet in new line
 * Return: 0 always
 */

int main(void)
{
	char z;

	for (z = 'z'; z >= 'a'; z--)
	{
		putchar(z);
	}
	putchar('\n');
	return (0);
}
