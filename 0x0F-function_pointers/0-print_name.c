#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - a program that print name
 * @name: the name to be printed
 * @f: pointer to the printing function
 * Return: name
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
