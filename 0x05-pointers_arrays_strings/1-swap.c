#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 * @a: first int to swap
 * @b: second int to swap
 * Return: 0
*/

void swap_int(int *a, int *b)
{

	int m;

	m = *a;
	*a = *b;
	*b = m;
}
