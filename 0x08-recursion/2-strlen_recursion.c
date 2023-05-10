#include "main.h"

/**
 * _strlen_recursion - Figure out the length of string
 * @s: the counted string
 * Return: integer value
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);
}
