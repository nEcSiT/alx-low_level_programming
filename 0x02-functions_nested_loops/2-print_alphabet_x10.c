#include "main.h"

/**
 *print_alphabet_x10 - Prints 10x the alphabets
 */

void print_alphabet_x10(void)

{
	int nic = 0;
	int dor;

		while (nic++ <= 9)
		{
			for (dor = 'a'; dor <= 'z'; dor++)
				_putchar(dor);

			_putchar('\n');
		}

}
