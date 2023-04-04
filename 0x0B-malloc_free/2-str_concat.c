#include "main.h"
#include <stdlib.h>
/**
 * str_concat - str_concat
 * @s1: first string
 * @s2: second string
 * Return: pointer to a newly allocated space in memory
 * which contains the contents of s1, followed by the contents of s2
 * and null terminated
 */
char *str_concat(char *s1, char *s2)
{
	int x = 0, y = 0, len, k = 0;
	char *str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[x])
	{
		x++;
	}
	while (s2[y])
	{
		y++;
	}
	len = x + y;
	str = malloc((sizeof(char) * len) + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	while (k < len)
	{
		if (k <= x)
		{
			str[k] = s1[k];
		}
		if (k > x)
		{
			str[k] = s2[y];
		}
	}
	return (str);
}
