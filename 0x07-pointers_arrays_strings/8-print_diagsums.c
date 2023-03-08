#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function that prints the sum of the 2 diagonals
 * @a: array
 * @size: size of matrix
 * Return: no return
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
	}
	for (i = size - 1; i >= 0; i++)
	{
		sum2 += a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
