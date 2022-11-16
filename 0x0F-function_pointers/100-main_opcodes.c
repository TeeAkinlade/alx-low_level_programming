#include <stdio.h>
#include <stdlib>

/**
 *
 *
 */
int main(int argc, char *argv[])
{
	int byte, i;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	byte = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	arr = (char *)main;
	for (i = o; i < bytes; i++)
	{
		if (i ==bytes -1)
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		print("%02hhx ", arr[i]);
	}
	return (0);
}
