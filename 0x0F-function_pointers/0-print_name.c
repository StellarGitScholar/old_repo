#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function to print a name as is
 *
 * @name: name of the person
 *
 * @f: a pointer
**/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	else
	{
		f(name);
	}
}
