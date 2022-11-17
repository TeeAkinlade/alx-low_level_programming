#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
/**
 * File: variadic_functions.h
 * Auth: Akinlade Taiye
 * Desc: Header file containing prototyoes for all functions
 * 	used in the 0x0F-variadicffunctions directory.
 */
#include <stdarg.h>
/**
 * struct printer - A new struct type defining a printer
 * @symbol: A symbols representing a data tyoe
 * @print: A function pointer to afunction
 */
typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);
} printer_t;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
