#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - creats array of pointers
 * @size: the size of the array
 * @c: the array name
 * Return: a poit to the array or null
 */

char *create_array(unsigned int size, char c)

{
unsigned int i;
char *arr;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(size * sizeof(char));

		if (arr == NULL)

			return (NULL);

		for (i = 0; i <= size; i++)

				arr[i] = c;
		return (arr);
		free(arr);
	
}
