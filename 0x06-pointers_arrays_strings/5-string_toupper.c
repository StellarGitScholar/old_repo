#include "main.h"
/**
 * string_toupper - changes string case from lowercase to uppercase
 * @str: the string to change
 *
 * Return: the string that was changed
 */
char *string_toupper(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
