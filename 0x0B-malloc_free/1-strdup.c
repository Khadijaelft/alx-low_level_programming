#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - a function that returns a pointer to a newly allocated space in
 * memory which contains a copy of the string given as a parameter.
 * @str: string.
 * Return: pointer to the array, or NULL.
*/

char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *x;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
	;
	x = malloc(size * sizeof(*str) + 1);

	if (x == 0)
	{
		return (NULL);
	}
	else
	{
		for (; i < size; i++)
			x[i] = str[i];
	}
	return (x);
}
