#include "main.h"
/**
 * factorial - function that returns the factorial of a given number
 * @n: number
 * Return: return -1 to indicate an error return or factorial of the number
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
