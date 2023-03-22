#include "function_pointers.h"
/**
 * array_iterator - for looping array
 * @array: array type
 * @size: int type
 * @action: funtion pointer type
 * Return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))

{	size_t i;
	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
