#include "main.h"
/**
 * _strcmp - compares two strings.
 * @s1: input
 * @s2: input
 * Return: 1 if s1 > s2, 0 if s1 == s2, -1 if s1 < s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 < *s2)
		{
			return (-1);
		}
		else if (*s1 > *s2)
		{
			return (1);
		}
		s1++;
		s2++;
	}
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (0);
	}
	else if (*s1 == '\0')
	{
		return (-1);
	}
	else
	{
		return (0);
	}
}
