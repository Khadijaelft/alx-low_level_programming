#include "main.h"
#include <stdio.h>

/**
 * _isupper - uppercase character
 * @c: check the code.
 * Return: 1 if c is uppercase, 0 for anything else.
 */

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	return (0);
}
