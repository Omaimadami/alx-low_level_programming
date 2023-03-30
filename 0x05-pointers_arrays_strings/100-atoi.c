#include "main.h"
/**
 * _atoi - function that convert a string to an integer
 * @s: string
 * Return: an integer
 */
int _atoi(char *s)
{
	int num = 0, sign = 1, c = 0;

	while (s[c] != '\0')
	{
		if (s[c] == '-')
		{
			sign *= -1;
		}
		else if (s[c] >= '0' && s[c] <= '9')
		{
			num = num * 10 + s[c] - '0';
			c++;
		}
	}
	if (num == 0)
	{
		return (0);
	}
	return (sign * num);
}
