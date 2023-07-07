#include <stdio.h>

/**
 * main - a program that prints all arguments it receives.
 * @argv: array of arguments
 * @argc: number of arguments
 * Return: 0(Success).
*/

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
