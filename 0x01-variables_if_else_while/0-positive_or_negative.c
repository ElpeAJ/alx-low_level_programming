#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */

/**
 * main - prints both positive and negative integers
 * Return: Always
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%i if the number is greater than 0: is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%i if the number is zero: is zero\n", n);
	}
	else
	{
		printf("%i if the number is less than 0: is negative\n", n);
	}
	return (0);
}
