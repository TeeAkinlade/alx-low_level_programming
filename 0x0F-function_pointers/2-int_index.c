#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - search for an interger
 * @array: the array to be inserted
 * @size: the size
 * @cmp: oointer comparing
 * Return: index to be return
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
