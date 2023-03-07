#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string
 * @accept: accepted string
 * Return: the number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	int len = 0, i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				len++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (len);
		}
		s++;
	}
	return (len);
}
