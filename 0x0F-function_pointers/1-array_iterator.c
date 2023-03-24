#include <stdio.h>
#include "function_pointers.h"

/**
 *array_iterator - function to execute functions given as
 *	parameters
 *
 *@array: is a pointer
 *
 *@action: is a pointer
 *
 *@size: is the size of the array
 *
 * Return: Nothing.
**/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
