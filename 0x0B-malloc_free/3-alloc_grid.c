#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - function that returns a pointer to a 2 dimensional
 * array of integers.
 * @width: the length of the array
 * @height: the height of the array
 * Return: the two dimensional array
 */
int **alloc_grid(int width, int height)
{
	int x;
	int y;
	int **me;

	if (width < 0 || height < 0)
		return (NULL);

	me = malloc(sizeof(int *) * height);
	if (me == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		me[x] = malloc(sizeof(int) * width);
	if (me[x] == NULL)
	{
		for (; x >= 0; x--)
		free(me[x]);
		return (NULL);
	}
	}
for (x = 0; x < height; x++)
{
	for (y = 0; y < width; y++)
		me[x][y] = 0;
	}
return (me);
}
