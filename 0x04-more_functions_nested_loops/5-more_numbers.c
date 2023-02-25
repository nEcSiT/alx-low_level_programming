#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers
 *
 * Return: 0
 */

void more_numbers(void)

{
	int i;

	for (i = 0; i <= 10; i++)
		{
		int j;
			for (j = 0; j <= 14; j++)
			{
				_putchar(j + '0');
			}

		_putchar(i + '0');

		}

	_putchar('\n');
}
