#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: no return
 */
void times_table(void)
{
	int a, b, m, r, d;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			m = a * b;
			if (m > 9)
			{
				r = m % 10;
				d = (m - r) / 10;
				_putchar(44);
				_putchar(32);
				_putchar(d + '0');
				_putchar(r + '0');
			}
			else
			{
				if (y != 9)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(m + '0');
			}
		}
		_putchar('\n');
	}
}
