#include "main.h"
/**
 * _memset - fill a bock of memory with a specific value
 * @s: starting address of memory to be filled
 * @b: the desored value
 * @n: number of bytes to be changes
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
