#include "main.h"
/**
 * _atoi - function that convert a string to an integer
 * @s: string
 * Return: an integer
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, num = 0;

	while (s[i])
	{
		if (s[0] == '-')
		{
			sign = -1;
			i++;
		}
		if (s[i] >= 48 && s[i] <= 57)
		{
			num = (num * 10) + (s[i] - '0');
		}
	}
	if (num = 0)
	{
		return (0);
	}
	return (sign * num);
}
