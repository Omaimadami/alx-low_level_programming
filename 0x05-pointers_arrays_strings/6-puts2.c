#include "main.h"
/**
 * puts2 - function that prints every other character of a string
 * @str: string
 * Return: void
 */
void puts2(char *str)
{
	int i, n = 0;

	while (str[n] != '\0')
	{
		n++;
	}
	for (i = 0; i < n; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
