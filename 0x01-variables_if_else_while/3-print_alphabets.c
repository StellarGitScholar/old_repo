#include <stdio.h>
/* my header goes there */

/**
 * main - A code that prints lowercase and uppercase alphabet
 * Return: Always 0
 */
/* betty style doc for function main goes there */
int main(void)
{
	char aZ;
	char AZ;

	for (aZ = 'a' ; aZ <= 'z' ; aZ++)
	{
		putchar (aZ);

		putchar ('\n');
	}
	for (AZ = 'A' ; AZ <= 'Z' ; AZ++)
	{
		putchar (AZ);

		putchar ('\n');
	}
/* my code goes there */
	return (0);
}
