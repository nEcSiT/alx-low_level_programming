#include "main.h"

/**
 * print_to_98 - prints to 98
 * @n: the int to display
 * Retuurn: 0
 */

void print_to_98(int n)

{
n = 0;
	while (n <= 98)
		{
		_putchar(n);
			n++;
		_putchar(',');
		_putchar(' ');
		}

_putchar('\n');
return;
}
