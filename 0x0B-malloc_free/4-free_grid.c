#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees 2 dimensional array
 * @grid: 2 dimension grid
 * @height: height of dimension grid
 * Descriotion: frees memory of grid
 * Return: always 0
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
