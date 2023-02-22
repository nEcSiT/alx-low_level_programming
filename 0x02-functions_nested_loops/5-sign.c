#include "main.h"

/**
 * print_sign - prints out the operation signs
 * @n: is the char in question
 * Return: 1 if the sign is +, 0 if the sign is 0 else print -1
 */

int print_sign(int n)
{
	if (n > '0')
	{
		_putchar('+');
		return (1);
	}
	else if (n == '0')
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
