#include <stdio.h>

/**
 * main - a program that prints its name, followed by a new line.
 * @argv: array of arguments
 * @argc: number of arguments
 * Return: 0
*/

int main(int argc, char *argv[])
{
		printf("%s\n", *argv);
		(void)argc;
		return (0);
}
