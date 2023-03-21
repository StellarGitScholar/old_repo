#include <stdio.h>

/**
 * main - function that prints the number of arguments that are
 *	passed to it
 * @argc: command that counts arguements to the function
 * @argv: command that saves the value of arguements passed to the
 *	function
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", (argc - 1));
	return (0);
}
