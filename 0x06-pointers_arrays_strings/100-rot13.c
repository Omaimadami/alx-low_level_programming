#include "main.h"
/**
 * rot13 - function that encodes a string using rot13
 * @strc: string to encode
 * Return: strc
 */
char *rot13(char *strc)
{
	int x, y;
	char alp[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	for (x = 0; strc[x] != '\0'; x++)
	{
		for (y = 0; strc[y] < 52; y++)
		{
			if (strc[x] == alp[y])
			{
				strc[x] = alp[y] + 13;
			}
		}
	}
	return (strc);
}
