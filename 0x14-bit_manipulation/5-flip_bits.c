#include "main.h"
/**
 * flip_bits - function to flip from one number to another
 * @n: input
 * @m: number of bits
 * Return: 0
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int calculate = 0;

	while (n != 0 || m != 0)
	{
		if ((n & 1) != (m & 1))
			calculate++;
		m = m >> 1;
		n = n >> 1;
	}

	return (calculate);

}
