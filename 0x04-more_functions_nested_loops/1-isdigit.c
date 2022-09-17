#include "main.h"

/**
 *  _isdigit - prints all numbers from 0 - 9
 *  @c: c is the parameter passed into the function
 *  Return: 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
