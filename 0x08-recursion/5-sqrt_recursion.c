#include "main.h"

int sqr_recursion(int n, int x);

/**
 * _sqrt_recursion - a function that returns
 * the natural square root of a number.
 * @n: number to calculate the sqaure root of.
 * Return: square root result.
*/

int _sqrt_recursion(int n)
{

	if (n < 0)
		return (-1);
	return (sqr_recursion(n, 0));
}

/**
 *sqr_recursion - recurses to find the natural.
 * @n: number to calculate the sqaure root of.
 * @x: iterator.
 * Return: square root result.
*/

int sqr_recursion(int n, int x)
{
	if (x * x > n)
		return (-1);
	else if (x * x == n)
		return (x);
	return (sqr_recursion(n, x + 1));
}

