#include "main.h"
/**
 * print_sign - Prints the sign of a number
 * @n: number to check
 * Return: 1 (n greater than zero), 0 (n is zero), or -1 (n less than zero)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
