#include "main.h"
/**
 * puts_half - puts_half
 * @str: string
 * Return: void
 */
void puts_half(char *str)
{
	int i = 0, n;

	while (str[i] != '\0')
	{
		i++
	}
	if (i % 2 != 0)
	{
		n = (i - 1) / 2;
		n += 1;
	}
	else
	{
		n = i / 2;
	}
	for (; n < i; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
