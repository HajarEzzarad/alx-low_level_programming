#include "main.h"
#include <stdlib.h>
 /**
 * free_grid: Frees a 2 dimensional grid previously created by alloc_grid.
 *
 * @grid:   Pointer to the grid to be freed
 * @height: Height of the grid
 *
 * Return:  void
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
