#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * except the letters e and q
 * remember to use != to mean not equal
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}