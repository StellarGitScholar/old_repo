#include "main.h"
/**
 * swap_int - This is a function that swaps the value of two integers
 *@a: integer to be modified
 *@b: integer to be modified
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
