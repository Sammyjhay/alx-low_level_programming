#include "main.h"

/**
 * _isalpha - checks if the character is an alphabet
 * either lower or upper case letter
 * @c: this is the argument that is passed into the afore mentioned function
 * Return: 1 if c is a letter
 *
 * remember to use if else statement
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
