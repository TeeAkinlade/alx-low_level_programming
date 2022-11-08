#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - create the array of character
 * @size: the size of that character
 * @c: char
 * Return: On success 1
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);
	array = malloc(size * sizeof(char));
	{
		if (array == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < size; i++)
		{
			array[i] = c;
		}
		return (array);
	}
}
