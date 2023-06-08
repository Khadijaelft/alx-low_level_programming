#include <stdio.h>
/**
 * main - Entry point
 * Description: prints the alphabet in lowercase reversed
 * Return: always 0
*/

int main(void)
{
	char X;

	for (X = 'z' ; X >= 'a' ; X--)
	{
	putchar(X);
	}
	putchar('\n');

	return (0);
}
