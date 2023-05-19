#include "main.h"
#include <stdio.h>

/**
 * main - prints every arg it receives
 * @argc: arg count
 * @argv: array of arg
 * Return: 0 Always
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
