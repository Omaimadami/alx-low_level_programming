#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates a string
 * @str: The string to duplicate
 * Return: Pointer to the duplicated string, or NULL if it fails
 */

char *_strdup(char *str)
{
	char *dstr;
	unsigned int length, i;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[length])
	{
		length++;
	}
	dstr = malloc((sizeof(char) * length) + 1);
	if (dstr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length; i++)
	{
		dstr[i] = str[i];
	}
	dstr[i] = '\0';
	return (dstr);
}
