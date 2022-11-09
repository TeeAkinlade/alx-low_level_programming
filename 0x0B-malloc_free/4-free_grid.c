#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - 2D diemwnsion
 * @grid: free
 * @height: height of the dimension
 * Return: On success 
 */
void free_grid(int **grid, int height)
{
	height--;
	while (height >= 0)
	{
		free(*(grid + height));
		height--;
	}
	free (grid);
}
