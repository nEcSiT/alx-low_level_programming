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
	{
		if ((ni != 'q' && ni != 'e') && ni <= 'z')
		putchar(ni);
		ni++;
	}
	{
		putchar('\n');
	}
	return (0);
}
