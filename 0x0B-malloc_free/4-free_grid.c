#include "main.h"
#include <stdlib.h>

/**
 * free_grid - computes a grid of integers
 * @grid: the address of the two dimensional grid
 * @height: height of the grid
 * Return: Error
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
