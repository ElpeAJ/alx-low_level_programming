#include <unistd.h>

/**
 * This is _putchar.c (not needed but created anyways)
 */

int _putchar(char c)
{
	return write(STDOUT_FILENO, &c, 1);
}
