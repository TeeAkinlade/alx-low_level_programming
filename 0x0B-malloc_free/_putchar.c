#include <unistd.h>
/**
 * _putchar - write the character c thatbwill be printed
 * Return: On success 1
 *
 */
int _putchar(char c)                                                  
{
	return (write(1, &c, 1));                                                  }
