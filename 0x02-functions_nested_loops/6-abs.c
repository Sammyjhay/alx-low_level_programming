#include "main.h"

/**
 * _abs - returns absolute value of numbers
 * @r: the parameter passed when the function _abs is called.
 * Return: returns positive if the number is negative
 */

int _abs(int r)
{
	if (r < 0)
	{
		return (-r);
	}
	else
	{
		return (r);
	}
}


