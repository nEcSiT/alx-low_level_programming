#include "main.h"

/**
 * print_last_digit - using the modulos operartor to print
 * @n: the char in display
 *Return: the last digit
 */

int print_last_digit(int n)

{
n = (n % 10);

	if (n < 0)

	_putchar(n + 1);
		return (n);
}
