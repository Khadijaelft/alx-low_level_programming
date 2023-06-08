#include "main.h"

/**
 * print_rev - a function that prints a
 * string, in reverse, followed by a new line.
 * @s: string
 * Return: 0
*/

void print_rev(char *s)
{
	int r = 0;
	int l;

	while (*s != '\0')
	{
		r++;
		s++;
	}
	s--;
	for (l = r; l > 0; l--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
