#include "main.h"

/**
 * _isdigit -checks if the char is a digit
 * @c: int to be checked
 * Return: 1 if c is a digit, p otherwise
 */
int _isdigit(int c)
{
	int y = 0;

	if (c >= '0' && c <= '9')
		y = 1;

	return (y);
}
