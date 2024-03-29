#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated for a dog structure
 * @d: pointer to the dog structure
 *
 * Return: None
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
