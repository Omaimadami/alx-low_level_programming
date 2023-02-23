#include "main.h"
/**
 *jack_bauer - prints every minute of the day
 *
 *Return: every minute of the day
 */
void jack_bauer(void)
{

	int x = 00;
	int y = 00;

	while (x <= '23')
	{
		while (y <= 59)
		{
			_putchar(x);
			_putchar(':');
			_putchar(y);
			_putchar('\n');
		}
	}
	return (void);
}
