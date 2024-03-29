#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees 2d array
 * @grid: 2d grid
 * @heigh: height dimension of grid
 * Description: frees memory of grid
 * Return: nothing
 *
 */
void free_grid(int **grid, int heigh)
{
	int i;

	for (i = 0; i < heigh; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
