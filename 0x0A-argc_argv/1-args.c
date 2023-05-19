#include "main.h"
#include <stdio.h>

/**
 * main - print argc passed to the prog
 * @argc: arg couunt
 * @argv: array of arguments
 * Return: 0 Always
 */
int main(int argc, char *argv[])
{
	(void) argv;/*ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
