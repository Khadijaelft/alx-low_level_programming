#include <stdio.h>
#include <stdlib.h>

/**
 * main -  a program that multiplies two numbers.
 * @argv: array of arguments
 * @argc: number of arguments
 * Return: 0 (Success), 1 (Error)
*/

int main(int argc, char *argv[])
{
	int mul;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
