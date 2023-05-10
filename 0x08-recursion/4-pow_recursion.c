#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power y
 * @x: the value to be multiplied
 * @y: the times to mutiplication of the value happens
 * Return: the value multiplied y times
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
