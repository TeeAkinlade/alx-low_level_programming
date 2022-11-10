#include "main.h"
#include <stdlib.h>
/**
 * _putchar - prints the value of character c
 * @c: the character to be  printed
 * Return: On success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
