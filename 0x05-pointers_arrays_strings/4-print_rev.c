#include "main.h"
/**
 * print_rev - that prints a string, in reverse, followed by a new line
 * @s: string
 * Return: void
 */
void print_rev(char *s)
{
	for (*s < '\0'; *s >= 0; s*--)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
