#include "main.h"

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to check.
 * Return: 1 if the number is prime, 0 otherwise.
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime(n, 2));
}

/**
 * is_prime - Recursive helper function to check if a number is prime.
 * @n: The number to check.
 * @div: The current divisor to check if n is divisible by.
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime(int n, int div)
{
	if (div >= n)
	{
		return (1);
	}
	if (n % div == 0)
	{
		return (0);
	}
	return (is_prime(n, div + 1));
}
