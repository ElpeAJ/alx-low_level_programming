#include "main.h"
#include <unistd.h>
#include <limits.h>

/**
 * print_binary - function that prints unsigned int
 * @n:...
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int prntbit = 1ul << 63;
	char c = '0';

	while (!(prntbit & n) && prntbit != 0)
		prntbit = prntbit >> 1;

	if (prntbit == 0)
		write(1, &c, 1);

	while (prntbit)
	{
		if (prntbit & n)
		{
			c = '1';
		}
		else
		{
			c = '0';
		}
		write(1, &c, 1);
		prntbit = prntbit >> 1;
	}
}
