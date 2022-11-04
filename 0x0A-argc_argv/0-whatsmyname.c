#include <stdio.h>
#include "main.h"
/**
 * main - print the name of the program
 * @argc: count arguement
 * @argv: arguement
 * Return: On success 1
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
