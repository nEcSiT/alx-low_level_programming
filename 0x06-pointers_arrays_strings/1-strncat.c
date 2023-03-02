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
	int i = 0;
	char *end = dest;

	while (*end != '\0')
	{
		end++;
	}
	while (i < n && *src != '\0')
	{
		*end = *src;
		end++;
		src++;
		i++;
	}
	*end = '\0';
	return (dest);
}
