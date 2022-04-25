#include "shell.h"

/**
* free_matrix - Will free a 2D matrix of int pointers
* @grid: Char double pointer to be freed
* @height: int for height of 2D array to be passed
* Return: void
**/

void free_grid(char **matrix, int height)
{
int z;
for (z = 0; z < height; z++)
free(matrix[z]);
free(matrix);
}
