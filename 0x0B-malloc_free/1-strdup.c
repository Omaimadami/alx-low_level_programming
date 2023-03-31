#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer to an allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: the string
 * Return: a pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *s;
	int i = 0, c = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		i++;
	}
	s = malloc((sizeof(char) * i) + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	while (c < i)
	{
		s[c] = str[i];
		c++;
	}
	s[c] = '\0';
	return (s);
}
