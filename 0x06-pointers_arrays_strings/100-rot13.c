#include "main.h"

/**
 * rot13 - encodes a string to ROT13
 * @s: input string to be encoded
 *
 * Return: string after encoding of ROT13
 */

char *rot13(char *s)
{
	int i, j;

	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] =   "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (a[j] == *(a + i))
			{
				*(s + i) = b[j];
				break;
			}
		}
	}
	return (s);
}
