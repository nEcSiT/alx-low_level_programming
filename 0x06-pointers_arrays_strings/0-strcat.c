#include "main.h"

/**
 * _strcat - concatinate text
 * @dest: the destination file
 * @src: the source file
 * Return: 0
 */

char *_strcat(char *dest, char *src)

{

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}
