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

#endif /* FUNCTION_POINTER_H */
