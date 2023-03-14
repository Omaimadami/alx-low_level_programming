#include "main.h"
/**
 * *_strcat - unction that concatenates two strings
 * @dest: string destination
 * @src: string source
 * Return: a pointer to a string
 */
char *_strcat(char *dest, char *src)
{
	int x = 0, y;

	while (dest[x])
	{
		x++;
	}
	for (y = 0; src[y] != 0; y++)
	{
		dest[x] = src[y];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
