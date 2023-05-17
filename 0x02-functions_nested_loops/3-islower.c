#include "main.h"

/**
 * _islower - Checks for lowercase letter
 * @c: Character that needs checking
 * Return: 1 for lowercase or 0 for anything else
 */

int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
