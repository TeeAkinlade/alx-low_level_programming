#include <unistd.h>

/**
 * _putchar - write character c to  standout
 * @c: char tonbe printed
 * Return: On success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
