#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - a function that initializes the elements of a structure
 * @d: the variable of type struct dog
 * @name: the name element
 * @age: the age element
 * @owner: the owner element
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
