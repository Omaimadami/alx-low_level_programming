#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array
 * @array: the array to search in
 * @size: number of elements in the array
 * @cmp: pointer to the function to use for comparison
 *
 * Return: index of the first element for which cmp function doesn't return 0,
 *         -1 if no element matches or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
