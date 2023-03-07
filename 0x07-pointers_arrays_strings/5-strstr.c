#include "main.h"

/**
 * _strstr - locating a substring
 * @haystack: the location of string
 * @needle: the string to locate
 * Return: a point to the beggining or null when not found
 */

char *_strstr(char *haystack, char *needle)
{
int i;

	for (i = 0; needle[i]; i++)

		if (needle[i] == haystack[i])
			return (needle);
	haystack++;
return ('\0');
}
