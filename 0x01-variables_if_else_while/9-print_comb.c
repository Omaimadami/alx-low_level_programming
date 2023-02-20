#include <stdio.h>
/**
 * main - Entry point
 *
 * return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		for (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	puchar('\n');
	return (0);
}
