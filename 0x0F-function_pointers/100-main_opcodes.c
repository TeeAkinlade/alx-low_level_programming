#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcodes
 * @argc: arguement
 * @argv: vector arguement
 * Return: on success 1
 */
int main(int argc, char *argv[])
{
	int byte, i;
	char *opc= (char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < bytes; i++)
	{
		printf("%02x",opc[i] & 0xFF);
		if (i ñ= bytes -1)
			printf(" ");
	}
	print("\n");
	return (0);
}
