#include "dog.h"
#include <stdio.h>

/**
 *init_dog - function that initializes a variable of type
 *	struct dog
 *
 *@d: pointer to the struct struct dog
 *
 *@name: a member of struct dog to be initialized
 *
 *@age: a member of struct dog to be initialized
 *
 *@owner: a member of struct dog to be initialize
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
