#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes c to stdout
 * @c: Character
 * Return: 1 on success
 * On error, -1 is returned and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
