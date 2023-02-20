#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand();

	printf("Last digit of %d is ", n);

	int last_digit = n % 10;

	if (last_digit > 5)
	{
		printf("%d and is greater than 5\n", lastDigit);
	}
	else if (last_digit == 0)
	{
		printf("0 and is 0\n");
	}
	else
	{
		printf("%d and is less than 6 and not 0\n", lastDigit);
	}

	return (0);
}
