#include "main.h"
#include <stdio.h>
/**
 * main - print two argument
 * @argc: count arguemrnt
 * @argv: arguement vector
 * Return: on successs 1
 */
int main(int argc, char *argv[])
{
	int count = 0;

	if (argc > 0)
	{
		while (count < argc)
		{
			printf("%s\n", argv[count]);
		}
	}
	return (0);
}
