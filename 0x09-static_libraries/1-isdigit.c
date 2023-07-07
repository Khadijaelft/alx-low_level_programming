#include "main.h"
#include <stdio.h>

/**
 * _isdigit - character is a digit
 * @c: check the code.
 * Return: 1 if c is uppercase, 0 for anything else.
 */

int _isdigit(int c)
{

	if (c >= '0' && c <= '9')
	{
	return (1);
	}
	return (0);
}
