#include "main.h"
/**
 * rot13 - function that encodes a string using rot13
 * @strc: string to encode
 * Return: strc
 */
char *rot13(char *strc)
{
	int x, y;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char c[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; strc[x] != '\0'; x++)
	{
		for (y = 0; y < 52; y++)
		{
			if (strc[x] == a[y])
			{
				strc[x] = c[y];
			}
		}
	}
	return (strc);
}
