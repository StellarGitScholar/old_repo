#ifndef VARIADIC_H
#define VARIADIC_H

/**
 *description/type - Header file
 *
 *@n: parameter
 *
 *Return: 0
 */

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

#endif /* VARIADIC_H */
