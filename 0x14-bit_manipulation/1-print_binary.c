#include "main.h"

/**
 * print_binary - prints binary representation
 * @n: long iint unsigned
 */






void print_binary(unsigned long int n)
{
	if (n >> 0)
	{
		if (n >> 1)
			print_binary(n >> 1);
		_putchar('0' + (n & 1));
	}
	else
	{
		_putchar ('0');
	}
}
