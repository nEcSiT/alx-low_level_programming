#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - function that duplicate
 * @str: string
 *
 * Return: Null or 0
 */

char *_strdup(char *str)

{
int i;
char *dup;

	if (str == NULL)

		return (NULL);

	i = strlen(str);

	dup = malloc(sizeof(char) * (i + 1));

	if (dup == NULL)

		return (NULL);

	strcpy(dup, str);

		return (dup);
}
