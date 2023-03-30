#include "main.h"
/**
 * _atoi - function that convert a string to an integer
 * @s: string
 * Return: an integer
 */
int _atoi(char *s)
{
	int num = 0, sign = 1;

	while (*s)
	{
		if (*s == '-')
		{
			sing *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			num = num * 10 + *s - '0';
		}
		s++;
	}
	if (num == 0)
	{
		return (0);
	}
	return (sign * num);
}
