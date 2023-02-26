#include <stdio.h>
/* my header goes there */

/**
 * main - A code that prints all lowercase alphabet except q and e
 * Return: 0 (success);
*/
/* betty style doc for function main goes there */
int main(void)
{
	char az;

	for (az = 'a' ; az <= 'z' ; az++)
		if (az != 'e' && az != 'q')
			putchar (az);

	putchar ('\n');

/* my code goes there */
	return (0);
}
