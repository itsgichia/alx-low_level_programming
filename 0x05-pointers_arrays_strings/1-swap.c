#include "main.h"
/**
 * swap_int - swap_int
 *
 * @a: first integer
 * @b: second integer
 *
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
