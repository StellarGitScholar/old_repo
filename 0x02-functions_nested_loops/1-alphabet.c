#include "main.h"

/**
 * print_alphabet - print all alphabet in lowercase
 */
int main(void)
{
	void print_alphabet(void);
	{
		char letter;

		for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

		_putchar('\n');
	}
	return 0;
}