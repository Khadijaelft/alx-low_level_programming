#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to a
 * 2 dimensional array of integers.
 * @width: int
 * @height: int
 * Return: 2d array
 */

int **alloc_grid(int width, int height)
{
	int **dim, x, y;

	dim = malloc(sizeof(*dim) * height);

	if (width <= 0 || height <= 0 || dim == 0)
	{
		return (NULL);
	}
	else
	{
		for (x = 0; x < height; x++)
		{
			dim[x] = malloc(sizeof(**dim) * width);
			if (dim[x] == 0)
			{
				while (x--)
					free(dim[x]);
				free(dim);
				return (NULL);
			}
			for (y = 0; y < width; y++)
				dim[x][y] = 0;
		}
	}

	return (dim);
}
