#include "main.h"

/**
 * print_last_digit - using the modulos operartor to print
 * @n: the char in display
 *Return: the last digit
 */

int print_last_digit(int n)

{
int b;

b = b % 10;

	if (b < 0)
	{
		b = b * -1;
	}

	_putchar(b + '0');
		return (b);
}
