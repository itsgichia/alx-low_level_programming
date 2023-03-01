#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @str: the pointer to convert
 * Return: a pointer to the modified pointer
 */

char *string_toupper(char *str)
{
	char *n = str;

	while (*n != '\0')
	{
		if (*n >= 'a' && *n <= 'z')
		{
			*n = *n - 32;
		}
		n++;
	}
	return (str);
}
