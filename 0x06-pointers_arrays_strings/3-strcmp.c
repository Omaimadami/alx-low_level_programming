#include "main.h"
/**
 * _strcmp - function that compares two strings
 * @s1: first string
 * @s2: second string
 * Return: less than 0 (s1<s2), equal 0 (s1=S2), greater than 0 (s1>s2)
 */
int _strcmp(char *s1, char *s2)
{
	int x = 0, y = 0;

	while (s1[x] != '\0')
	{
		x++;
	}
	while (s2[y] != '\0')
	{
		y++;
	}
	return (s1[x] - s2[y]);
}
