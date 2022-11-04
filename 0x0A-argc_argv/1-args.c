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
	(void) argv;
	printf("%i\n", argc - 1);
	return (0);
}
