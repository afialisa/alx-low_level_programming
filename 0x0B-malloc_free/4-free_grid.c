#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - a program that frees 2 dimentional arrays
 * @grid: 2 dimentional grid
 * @height: the grint height dimension
 * Description: frees grid memory
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
int a;
for (a = 0; a < height; a++)
{
free(grid[a]);
}
free(grid);
}

