#include "function_pointers.h"

/**
 * int_index - main entrance of the function
 * @array: array
 * size: the size
 * cmp: funct pointer
 *
 * Return:0
 */

int int_index(int *array, int size, int (*cmp)(int))

{
	int i;

	if (array && size && cmp)

	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}


	return (-1);
}
