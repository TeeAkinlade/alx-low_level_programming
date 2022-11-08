#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * str_concat - malloc to concatinate two strings
 * @s1: first string
 * @s2: second string
 * Return: On success return 1
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int s1_size = 0, s2_size = 0, counter = 0, counter2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + s1_size) != '\0')
		s1_size++;
	while (*(s2 + s2_size) != '\0')
		s2_size++;
	concat_str = malloc((s1_size + s2_size + 1) * sizeof(char));
	if (concat_str == NULL)
	{
		concat_str[counter] = s1[counter];
	}
	for (counter2 = 0; s2[counter2] != '\0'; counter++, counter2++)
	{
		concat_str[counter] = s2[counter2];
	}
	concat_str[counter] = '\0';
	return (concat_str);
}
