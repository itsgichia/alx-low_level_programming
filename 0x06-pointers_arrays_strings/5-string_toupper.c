#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @n: pointer
 * Return: str
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
