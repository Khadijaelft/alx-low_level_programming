#include <stdio.h>
/**
* main - Entry point
* Description: prints the alphabet in lowercase
* and uppercase except q and e
* Return: always 0
*/

int main(void)
{
	char X;

	for (X = 'a' ; X <= 'z' ; X++)
	{
		if (X != 'e' && X != 'q')
		{
			putchar(X);
		}
	}

	putchar('\n');

	return (0);
}
