#include <stdio.h>
/* my header goes there */

/**
 * main - A code that prints lowercase and uppercase alphabet
 * Return: Always 0
 */
/* betty style doc for function main goes there */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}

	for (i = 'A'; i <= 'Z'; i++)
	{
		putchar(i);
	}

/* my code goes there */
	return (0);
}
