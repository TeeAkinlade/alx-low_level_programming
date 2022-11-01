#include <unistd.h>
#include "main.h"
/**
 * _putchar - what will be printed
 * @c: character
 * Return: On success return 1 else -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
