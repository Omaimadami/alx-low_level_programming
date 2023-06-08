#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to calculate the square root of.
 * Return: The natural square root of n.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt(n, 1));
}

/**
 * _sqrt - Recursive helper function to find the square root.
 * @n: The number to calculate the square root of.
 * @i: interate number
 * Return: The natural square root of n.
 */

int _sqrt(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return (_sqrt(n, i + 1));
}
