#include <stdio.h>

/**
 * main - a function that prints all single digits in base ten
 * starting from 0 and ending at 9, using the comparison <
 * using for loop, n++ to indicate increament
 * Return: 0 Always (ends the function)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10;  n++)
		printf("%d", n);
	printf("\n");
	return (0);
}
