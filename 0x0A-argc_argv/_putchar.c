#include "main.h"
#include <stdio.h>

/**
 * _putchar - writes c to stdout
 * @c: The character to be printed
 * Return: 1
 * On error, return -1 and set errno appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
