#include "main.h"
int if_num_prime(int, int);
/**
 * is_prime_number - identifie if n is a prime number
 * @n: number
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	return (if_num_prime(n, 1));
}
/**
 * if_num_prime - check if number i prime
 * @n: number
 * @i: number
 * Return: 1 if n is prime or 0 otherwise
 */
int if_num_prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n % i == 0 && i > 1)
	{
		return (0);
	}
	if ((n / i) < i)
	{
		return (1);
	}
	return (if_num_prime(n, i + 1));
}
