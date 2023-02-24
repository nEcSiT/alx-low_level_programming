#include <stdio.h>

/**
 * main - prints all nubers of mode 16 in lover case
 *
 * Return: 0
 */

int main(void)
{
	int a = 'a';
	int b = 0;

		while (b < 10)
		{
			putchar(b + '0');
				b++;
		}
		while (a <= 'f')
		{
			putchar(a);
				a++;
		}
		putchar('\n');
		return (0);
}
