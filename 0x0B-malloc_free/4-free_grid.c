#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * free_grid - free memory dynamically allocated
 * @grid: pointer to 2-D array
 * @row: row of the array
 */

void free_grid(int **grid, int row)
{
	int i;

	for (i = 0; i < row; i++)
<<<<<<< HEAD
		free(grid[i]);
	free(grid);
}

=======
	free(grid[i]);
	free(grid);
}
>>>>>>> b04ff48 (My commit)
