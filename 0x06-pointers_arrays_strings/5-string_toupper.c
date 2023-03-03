#include "main.h"
/**
 * string_toupper - function that changes lowercase letters to uppercase
 * @ltu: lowercase string
 * Return: a pointer to a string
 */
char *string_toupper(char *ltu)
{
	int i = 0;

	while (ltu[i] != '\0')
	{
		if (ltu[i] >= 'a' && ltu[i] <= 'z')
		{
			ltu[i] = ltu[i] - 32;
		}
		i++;
	}
	return (ltu);
}
