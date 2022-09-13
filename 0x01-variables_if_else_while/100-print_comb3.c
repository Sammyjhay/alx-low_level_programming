#include <stdio.h>

/**
 * main - a function that collates double digits
 * in ascending order without repitition
 * separated by a comma
 * Return: 0 always
 */
int main(void)
{
	int a;
	int b;

	for (a = 0; a <= 9; a++)
	{
		for (b = a + 1; b <= 9; b++)
		{
			putchar(a + '0');
			putchar(b + '0');
			if (a < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
