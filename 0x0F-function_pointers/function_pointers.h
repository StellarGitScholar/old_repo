#ifndef FUNCTION_POINTER_H
#define FUNCTION_POINTER_H

/**
 *description/type - Header file
 *
 *@name: name to be printed
 *
 *@f: a pointer
 */

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif /* FUNCTION_POINTER_H */
