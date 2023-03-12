#include "main.h"
/**
 * *_memcpy - copies area of  memory
 * @dest: destination memory
 * @src: source
 * @n: length
 *
 * Return: 0 des
 */


char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
