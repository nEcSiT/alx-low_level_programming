#include "main.h"

/**
 * _strchr - searches a dtring
 * @s: pointer
 * @c: int type
 * Return: c
 */

char *_strchr(char *s, char c)

{
	int j;

	for (j = 0; s[j] >= '\0'; j++)
	{
		if (s[j] == c)
			return (s + 1);
	}
	return ('\0');
}
