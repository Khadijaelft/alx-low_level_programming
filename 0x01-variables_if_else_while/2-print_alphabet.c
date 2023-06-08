#include <stdio.h>
/**
 * main - Entry point
 * Description: prints the alphabet in lowercase
 * Return: always 0
*/

int main(void)
{
	char X;

	for (X = 'a' ; X <= 'z' ; X++)
	{
	putchar(X);
	}
	putchar('\n');

	return (0);
}
