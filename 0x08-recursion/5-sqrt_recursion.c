#include "main.h"
int _sqrt(int, int);
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: the number
 * Return: return -1 (n does not have a natural sqrt) or the natural sqrt of n
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - calculate square root
 * @n: number
 * @i: number
 * Return: sqrt
 */
int _sqrt(int n, int i)
{
	int sq = i * i;

	if (sq > n)
	{
		return (-1);
	}
	if (sq == n)
	{
		return (i);
	}
	return (_sqrt(n, i + 1));
}
