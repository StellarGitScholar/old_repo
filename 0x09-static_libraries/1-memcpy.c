#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: memory where mem area to be copied is stored
 * @src: memory where memory area is copied
 * @n: number of bytes
 * Return: copied memory with a changed n byte
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i;

	for (i = n; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
