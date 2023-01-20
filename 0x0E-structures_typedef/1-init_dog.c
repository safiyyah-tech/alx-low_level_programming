#include "dog.h"
#include <stdio.h>


/**
 * init_dog - initializes the dog's structure
 * @d: The dog's structure
 * @name: the dog's name
 * @age: the dpg's age
 * @owner: the dog's owner
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
