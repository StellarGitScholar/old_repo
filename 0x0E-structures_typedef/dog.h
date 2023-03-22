#ifndef DOG_H
#define DOG_H

/**
 *struct dog - a structure that contains details for dogs
 *
 *@name: the name of the dog
 *
 *@age: the age of the dog
 *
 *@owner: the name of the owner of the dog
 *
 *@dog: a new type
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

#endif /* DOG_H */
