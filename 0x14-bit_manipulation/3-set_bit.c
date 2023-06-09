#include "main.h"

/**
 * set_bit - function that sets a bit at a given index
 * @n: pointer to number
 * @index: index
 * Return: -1 for failure and 1 for success
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
