#include <stdio.h>

/**
 * main - function that prints all argument it receives
 * @argc: command that counts all arguements to the function
 * @argv: command that stores the value of all arguements to the
 *	function
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
