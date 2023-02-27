#include "main.h"

/**
 * print_rev - print in reverse
 * @s: the int type
 * Return: 0
 */

void print_rev(char *s)

{
	for (; *s != '\0'; s--)

		_putchar(*s);

	_putchar('\n');
}
