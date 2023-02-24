#include <stdio.h>
#include <time.h>
#include <stdlib.h>


/**
 *main - A program that checks if a given number
 *	is positive or  negative
 *Return: Always 0
 */
void positive_or_negative(int i)
{

	i = 0;

	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else
	{
		if (i < 0)
		{
			printf("%d is negative\n", i);
		}
		else
		{
			if (i == 0)
			{
				printf("%d is zero\n", i);
			}
		}
	}
}
