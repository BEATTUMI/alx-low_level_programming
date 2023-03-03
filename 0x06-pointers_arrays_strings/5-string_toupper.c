#include "main.h"

/**
 * string_toupper - Changes all lowercase letters
 * of a string to upppercase.
 * @str: The string to be checked.
 * Return: A pointerto the changed string.
 *
 */

char *string_toupper(char *str)

{
	int index = 0;

	while (str[index])
	{
	if (str[index] >= 'a' && str[index] <= 'z')
	str[index] -= 32;
	index++;
	}
	return (str);
}
