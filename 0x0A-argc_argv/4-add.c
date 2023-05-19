#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>

/**
 * check_num - check string to see if there are digits
 * @str: array string
 * Return: 0
 */
int check_num(char *str)
{
	/*Always declare variables*/
	unsigned int count;

	count = 0;
	while (count < strlen(str))/*counting string*/

	{
		if (!isdigit(str[count]))/*checking if str is digit*/
		{
			return (0);
		}

		count++;
	}
	return (1);
}

/**
 * main - Prints prog name
 * @argc: arg count
 * @argv: array of arg
 * Return: 0
 */

int main(int argc, char *argv[])
{
	/*Alwarys declare variables*/
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc)/*Goes thru the whole array*/
	{
		if (check_num(argv[count]))

		{
			str_to_int = atoi(argv[count]);/*atoi --> convert strig to int*/
					sum += str_to_int;
					}

					/*If one of the number contains non-digits*/
					else
					{
					printf("Error\n");
					return (1);
					}

					count++;
					}

					printf("%d\n", sum);/*print the sum*/

					return (0);
					}
