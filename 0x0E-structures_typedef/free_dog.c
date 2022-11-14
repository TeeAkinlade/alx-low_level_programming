#include "dog.h"
#include <stdlib.h>
/**
 * free_dog _ free dogs
 * @d: dog to be free
 * Retyrn: On success 1
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->owner);
	free(d->name);
	free(d);
}
