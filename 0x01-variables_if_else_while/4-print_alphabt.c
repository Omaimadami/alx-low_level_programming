#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i = ('a');

	do {
		i < ('z');
		putchar(i);
	} while (i != 'qe');
	putchar('\n');
	return (0);
}
