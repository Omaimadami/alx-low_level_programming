#include "main.h"
/**
 * leet - function that encodes a string into 1337
 * @strc
 * Return: strc
 */
char *leet(char *strc)
{
	int x, y;
	char c[] = "aAeEoOtTlL";
	char n[] = "4433007711";

	for (x = 0; strc[x] != '\0'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (strc[x] == c[y])
			{
				strc[x] = n[y];
			}
		}
	}
	return(strc);
}
