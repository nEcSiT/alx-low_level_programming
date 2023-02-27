#include "main.h"

/**
 * _strlen - return a value
 * @s: the int name
 * Return: 0
 */

int _strlen(char *s)

{
	int cat = 0;

	for (; *s != '\0'; s++)

	cat++;

return (cat);
}
