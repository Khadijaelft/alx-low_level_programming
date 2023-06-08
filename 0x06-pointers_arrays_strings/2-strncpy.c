#include "main.h"

/**
 * *_strncpy - a function that copies a string.
 * @dest: destination string
 * @src: source string
 * @n: number of bytes from src.
 * Return: A pointer to the destination string.
 */

char *_strncpy(char *dest, char *src, int n)
{

	int src_len = 0, i = 0;

	while (src[i++])
	{
		src_len++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (i = src_len; i < n; i++)
	dest[i] = '\0';
	return (dest);
}
