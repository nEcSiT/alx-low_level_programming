#include <stdio.h>

/**
 * main - Prints alphabets in reverse order
 *
 * Return: 0
 */

int main(void)

{
	int k = 'z';

		while (k >= 'a')
		{
			putchar(k);
				k--;
		}
			putchar('\n');
		return (0);
}
