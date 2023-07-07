#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it.
 * @argv: array of arguments
 * @argc: number of arguments
 * Return: 0(Success).
*/

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
