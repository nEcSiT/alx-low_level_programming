#include "main.h"

/**
 * print_last_digit - using the modulos operartor to print
 * @n: the char in display
 *Return: the last digit
 */

int print_last_digit(int n)

{
int n;

n = (n % 10);

	if (n < 0)
	{
		n = n * -1
	}

	_putchar(n + 1);
		return (n);
}
