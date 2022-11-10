#include <stdlib.h>
#include "main.h"
/**
 * *malloc_checked - allocate memory using malloc
 * @b: memory to be allocated
 * Return: pointer to allocated memory or normall proccess termination if error
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
