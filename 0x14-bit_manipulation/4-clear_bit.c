#include "main.h"
/**
 * clear_bit - Function that sets the value of a given it to 0
 * @n: pointer to a number
 * @index: index
 * Return: 1 upon success, -1 upon failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = *n & ~(1ul << index);
	return (1);
}
