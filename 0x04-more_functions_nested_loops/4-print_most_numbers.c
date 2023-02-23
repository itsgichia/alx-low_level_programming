#include "main.h"
/**
 * print_most_numbers - prints number 0 to 9 but not 2 and 4
 *
 * Return: 0 on success
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
	}

	_putchar('\n');
}
