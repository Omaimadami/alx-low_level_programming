#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int alp = 'a';

	for (alp <= 'z'; alp++)
	{
		putchar(alp);
	}
	putchar('\n');
	return (0);
}
