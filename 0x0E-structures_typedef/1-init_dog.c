#include "dog.h"

/**
 * init_dog - init dog
 * @d: struct dog
 * @name: name of dog
 * @age: dog age
 * @owner: dog owner
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
