#include "main.h"

/**
 * _strncat - function to be used
 * @dest: int type
 * @src: int type
 * @n: int type
 * Return: 0
 */

char *_strncat(char *dest, char *src, int n)

{

	char *me = dest;

	while (src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

return (me);
}
