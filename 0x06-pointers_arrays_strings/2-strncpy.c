#include "main.h"

/**
 * _strncpy - function
 * @dest: int type
 * @src: int type
 * @n: int type
 * Return: 0
 */

char *_strncpy(char *dest, char *src, int n)

{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
