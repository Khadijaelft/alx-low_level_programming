#include "main.h"

/**
 * *_strncat - a function that concatenates two strings.
 * @dest: destination string.
 * @src: source string.
 * @n: number of bytes from src.
 * Return: A pointer to the destination string.
 */

char *_strncat(char *dest, char *src, int n)

{
	int dest_len = 0, index = 0;

	while (dest[index++])
	{
		dest_len++;
	}
	for (index = 0; src[index] && index < n; index++)
	{
		dest[dest_len++] = src[index];
	}
	dest[dest_len] = '\0';
	return (dest);
}
