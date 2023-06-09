#include "main.h"

/**
 * get_bit - function that returns val of bit...
 * @n: number
 * @index: index
 * Return: val of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
		return (-1);

	bit_value = (n >> index) & 1;

	return (bit_value);
}
