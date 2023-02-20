#include <stdio.h>

/**
 * main - prints alphabet except eq
 *
 * Return: 0
 */

int main(void)
{
	char ni = 'a';
		while (ni <= 'z')
		if (ni != 'q' && ni != 'e')
	{
		putchar(ni);
		ni++;
	}
	{
		putchar('\n');
	}
}
