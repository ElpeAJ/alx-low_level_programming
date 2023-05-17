#include "main.h"

/**
 * _abs - Computes the abs val of an integer
 * @c: Number to be computed
 * Return: Abs val of num or 0
 */

int _abs(int c)

{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
