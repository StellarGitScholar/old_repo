#include "main.h"
/**
 * factorial - function to print the factorial of a given num
 * @n: input
 * Return: 0
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
