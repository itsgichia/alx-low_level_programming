#include "main.h"
/**
 * main - Entry point
 *
 * Return: 0 on success
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');
}

