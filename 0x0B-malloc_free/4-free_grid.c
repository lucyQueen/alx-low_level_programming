#include "main.h"
#include <stdlib.h>
/**
  *free_grid - function that frees a 2 dimensional grid
  *@grid:input
  *@height:height of grid
  *
  *Return:return 0
  */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
