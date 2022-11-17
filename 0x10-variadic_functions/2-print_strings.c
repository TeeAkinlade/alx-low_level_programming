#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 * Description: If separator is NULL, it is not printed.
 * Return: On success 1.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	char *str;
	unsigned int index;

	va_start(string, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(string, char *);
	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);
	if (index != (n - 1) && separator != NULL)
		printf("%s", separator);
	}
	printf("\n");
	va_end(string);
}
