#include "main.h"

/**
 * _strcmp - a function that compares two strings.
 * @s1: the pointer to the first string to be compared.
 * @s2: the pointer to the first string to be compared.
 * Return: if s1 < s2 return negative result,
 * if s1 > s2 return positive result, if s1 = s2 return 0
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
