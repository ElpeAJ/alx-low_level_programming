#include "main.h"

/**
 * _isdigit - Check to see if character is a digit
 * @x: Number to be checked
 * Return: 1 if character will be a digit or 0 for anything else
 */
int _isdigit(int x)

{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}
	return (0);
}
