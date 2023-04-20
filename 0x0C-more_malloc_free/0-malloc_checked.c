#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - the malloc prototype
 * @b: is the int type
 *
 * Return: a ptr
 */

void *malloc_checked(unsigned int b)

{

	void *ptr = malloc(b);

if (ptr == NULL)
	exit(98);


return (ptr);
}
