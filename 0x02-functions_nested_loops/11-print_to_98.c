#include "main.h"

/**
 * print_to_98 - this function prints all numbers to 98
 * @n: parameter to be paased into the above function
 */

void print_to_98(int n)
{
		if (n < 98)
			printf("%d, ", n++);
		else if (n == 98)
			printf("%d\n", n);
		else
			printf("%d, ", n--);
}
