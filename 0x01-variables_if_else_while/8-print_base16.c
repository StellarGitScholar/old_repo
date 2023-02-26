#include <stdio.h>
/**
 * main - print base 16 in lowercase
 *
 * Return: Always 0
 *
 */
int main(void)
{
	int n, a;

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	for (a ='a'; a <= 'f'; a++)
		putchar(a);

	putchar('\n');

	return (0);
}
