#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of integers
 *              with each element initialized to 0.
 *
 * @width:  Width of the array
 * @height: Height of the array
 *
 * Return: Pointer to the array if successful, NULL if failure
 */
int **alloc_grid(int width, int height)
{
    int **grid;
    int i, j;

    /* Check for valid width and height */
    if (width <= 0 || height <= 0)
        return (NULL);

    /* Allocate memory for the rows */
    grid = (int **) malloc(height * sizeof(int *));
    if (grid == NULL)
        return (NULL);

    /* Allocate memory for the columns */
    for (i = 0; i < height; i++) {
        grid[i] = (int *) malloc(width * sizeof(int));
        if (grid[i] == NULL) {
            /* Free previously allocated memory if any */
            for (j = 0; j < i; j++)
                free(grid[j]);
            free(grid);
            return (NULL);
        }

        /* Initialize all elements to 0 */
        for (j = 0; j < width; j++)
            grid[i][j] = 0;
    }

    return (grid);
}

