#include "main.h"

/**
 * times_table - a function that write the 9 times table
 * Return: always 0
 */

void times_table(void)

{
int a;
int b;
	for (a = 0; a <= 10; a++)
		{
		for (b = 0; b <= 10; b++)
		{
			_putchar(a);
			_putchar(b);
		}
		_putchar('\n');
		}
return;
}
