#include <stdio.h>
/**
 * main - Entry point
 * Description: prints numbers
 * Return: always 0
*/

int main(void)
{
	char X;

	for (X = '0' ; X <= '9' ; X++)
	{
	putchar(X);
	}
	putchar('\n');

	return (0);
}
