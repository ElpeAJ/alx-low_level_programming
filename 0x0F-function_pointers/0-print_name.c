#include "function_pointers.h"

/**
 * print_name - Prints
 * @name: The name to be printed
 * @f: Pointer to the function
 * Return:
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
