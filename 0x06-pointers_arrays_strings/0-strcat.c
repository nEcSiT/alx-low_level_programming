#include "main.h"

/**
 * _strcat - concatinate text
 * @dest: the destination file
 * @src: the source file
 * Return: 0
 */

char *_strcat(char *dest, char *src)

{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		dest++;
		i++;
	}
	while (src[j] != '\0')
	{
		*dest = *src;

		dest++;
		src++;
		j++;
	}
*dest = '\0';

return (dest);
}