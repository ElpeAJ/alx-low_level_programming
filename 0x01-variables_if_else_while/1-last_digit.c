#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */

/**
 * main - Prints
 * Return: Always
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last_digit = n % 10;

	if (last_digit > 5)
	{
		printf("Last digit of %d is %d", n, last_digit);
		printf(" and is greater than 5.\n");
	}
	else if (last_digit == 0)
	{
		printf("Last digit of %d is %d", n, last_digit);
		printf(" and is 0.\n");
	}
	else if (last_digit < 6 && last_digit != 0)
	{
		printf("Last digit of %d is %d and", n, last_digit);
		printf(" is less than 6 and not 0.\n");
	}
	return (0);
}
