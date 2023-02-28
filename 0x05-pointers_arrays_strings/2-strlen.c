#include "main.h"

/**
 * _strlen - returns the length of @s
 * @s: the string
 * Return: length of the string @s
**/

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}
