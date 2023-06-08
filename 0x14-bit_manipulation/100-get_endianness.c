#include "main.h"

/**
 * get_endianness - function to check
 *
 * Return: 0 if big, 1 if small
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return ((int)*c);
}
