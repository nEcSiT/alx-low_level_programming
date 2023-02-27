#include "main.h"

/**
 * swap_int - swap value for
 * @a: the integer
 * @b: the second interger
 * Return: 0
 */

void swap_int(int *a, int *b)

{
	int cat;

	cat = *a;
	*a = *b;
	*b = cat;
}
