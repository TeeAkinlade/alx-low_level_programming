#include "main.h"
/**
 * _strncat - copies a test from ource to destination
 * @dest: destination
 * @src: source
 * @n: number to be printed
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = != '\0';
	return (dest);
}
