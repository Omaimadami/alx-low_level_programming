#include "main.h"
#include <stdio.h>
/**
 * main - program that adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Successs)
 */
int main(int argc, char *argv[])
{
	int add = 0, i;

	if (argc > 1)
	{
		for (i = 0, i < argc, i++)
		{
			if (argv[i] < 48 || argv[i] > 57)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				add += atoi(argv[i]);
			}
		}
		printf("%d\n", add);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
