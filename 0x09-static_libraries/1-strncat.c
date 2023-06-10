#include "main.h"
/**
 * *_strncat - function that concatenates two strings
 * @dest: string destination
 * @src: string source
 * @n: number of characters
 * Return: a pointer to a string
 */
char *_strncat(char *dest, char *src, int n)
{
	int x = 0, y = 0;

	while (dest[x] != '\0')
	{
		x++;
	}
	while (y < n && src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
