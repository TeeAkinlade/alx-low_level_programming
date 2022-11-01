#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - print the cheeseboard
 * @a: the cheeseboard
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int x;
	int y;

	for (x = 0; x < 8; x++)
	{
		for (y = 0; y < 8; y++)
		{
			putchar(a[x][y]);
		}
		_putchar('\n');
	}
}
