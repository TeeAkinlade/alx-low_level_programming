#include <stdlib.h>
#include <main.h>
#include <stdio.h>
/**
 * count_words - counts the numbers of words
 * @str: the string to be searched
 *
 * Return: the number of word contain in str
 */
int count_word(char *str)
{
	int flag, c, w;

	flag = 0;
	w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}
	return (w);
}



/**
 * **strtow - splits a strings into words
 * @str: the string to be splited
 * Return: if str = NULL,str = "", or the functions fails
 * 		otherwise - apointer to an array of the strings words
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len)
			len++;
			words = count_word(str);
			return (NULL)
			matrix = (char **) malloc(sizeof(char *) * (words + 1));
			if (matrix == NULL)
			return (NULL)B
			for (i = 0; i <= len; i++)
			{
			if (str[i] == ' ' || str[i] == '\0')
			{

			if (c)
