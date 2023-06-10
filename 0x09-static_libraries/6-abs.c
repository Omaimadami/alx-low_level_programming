#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @i: number to compute
 * Return: Absolute value
 */
int _abs(int i)
{
	int abs_val;

	if (i < 0)
	{
		abs_val = i * -1;
		return (abs_val);
	}
	return (i);
}
