#include "main.h"

/**
 * _strncpy - copyba string
 * @dest: destination
 * @src: source
 * @n: number of time to be printed
 * Return: 1 on success
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
