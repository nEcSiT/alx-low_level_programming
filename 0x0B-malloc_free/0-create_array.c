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

	if (size == 0)
	{
		return (NULL);
	}
	else

	{
	char * arr = (char*) malloc(size * sizeof (char));

		for (i = 0; i <= size; i++)

			arr[i] = c;

		return (arr);
	 }
}
