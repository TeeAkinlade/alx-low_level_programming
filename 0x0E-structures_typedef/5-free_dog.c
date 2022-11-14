#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free dogs
 * @d: dog be free
 * Return: on success 1
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->owner);
	free(d->name);
	free(d);
}
