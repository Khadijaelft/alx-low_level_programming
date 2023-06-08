#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers.
 * Return: 0
**/

int main(void)
{
	int X;

	for (X = '0'; X <= '9'; X++)
	{
		putchar(X);

		if (X != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
