#ifndef MAIN_H
#define MAIN_H

/**
 *description/type - Header file
 *
 *@b: pointer to a string of chars containing 0 and 1
 *
 *Return: the converted number or 0 if certain conditions
 *	are not met
 */

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);

int _putchar(char c);

#endif /*MAIN_H*/
