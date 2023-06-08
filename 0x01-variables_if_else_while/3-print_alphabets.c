#include <stdio.h>
/**
* main - Entry point
* Description: prints the alphabet in lowercase
* and uppercase
* Return: always 0
*/

int main(void)
{
	char X;

	for (X = 'a' ; X <= 'z' ; X++)
	{
	putchar(X);
	}

	for (X = 'A' ; X <= 'Z' ; X++)
	{
	putchar(X);
	}

	putchar('\n');

	return (0);
}
