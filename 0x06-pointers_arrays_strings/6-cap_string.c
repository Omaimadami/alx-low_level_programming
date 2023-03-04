#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string
 * @cstr: string
 * Return: a pointer to a string
 */
char *cap_string(char *cstr)
{
	int i = 0;

	while (cstr[i])
	{
		while (!(cstr[i] >= 'a' && cstr[i] <= 'z'))
			i++;
			if (cstr[i - 1] == ' ' ||
			cstr[i - 1] == '\t' ||
			cstr[i - 1] == '\n' ||
			cstr[i - 1] == ',' ||
			cstr[i - 1] == ';' ||
			cstr[i - 1] == '.' ||
			cstr[i - 1] == '!' ||
			cstr[i - 1] == '?' ||
			cstr[i - 1] == '"' ||
			cstr[i - 1] == '(' ||
			cstr[i - 1] == ')' ||
			cstr[i - 1] == '{' ||
			cstr[i - 1] == '}' ||
			i == 0)
				cstr[i] = cstr[i] - 32;
				i++;
	}
	return (cstr);
}
