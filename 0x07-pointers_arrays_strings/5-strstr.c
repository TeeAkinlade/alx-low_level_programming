#include "main.h"
#include <stddef.h>
/**
 * _strstr - finds the first occurance of needle in baystack
 * @haystack: we look for
 * @needle: where we look
 * Return: NULL or substring
 */
char *_strstr(char *haystack, char *needle)
{
	int point;

	for (; *haystack; haystack++)
	{
		for (point = 0; needle[point]; point++)
		{
			if (!(*(haystack + point)))
			{
				return (NULL);
			}
			if (*(haystack + point) != needle[point])
				break;
		}
		if (needle[point] == '\0')
			return (haystack);
	}
	return (NULL);
}
