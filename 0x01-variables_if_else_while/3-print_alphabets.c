#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	char ALP[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;
	int x;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	for (x = 0; x < 26; x++)
	{
		putchar(ALP[x]);
	}
	putchar('\n');
	return (0);
}
