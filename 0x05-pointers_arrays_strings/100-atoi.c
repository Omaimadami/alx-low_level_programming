#include "main.h"
/**
 * _atoi - function that convert a string to an integer
 * @s: string
 * Return: an integer
 */
int _atoi(char *s)
{
	unsigned int num = 0;
	int sign = 1;

	while (*s)
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			num = num * 10 + *s - '0';
		}
		else if (num > 0)
		{
			break;
		}
		s++;
	}
	if (num == 0)
	{
		return (0);
	}
	return (sign * num);
}
