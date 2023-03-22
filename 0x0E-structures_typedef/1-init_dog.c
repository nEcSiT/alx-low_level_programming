#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - void pointer
 * @d: pointer to struct dog
 * @name: pointer to name
 * @age: pointer to age
 * @owner: pointer to owner
 *
 * Return: 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)

	{

	d = malloc(sizeof(struct dog));

		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
