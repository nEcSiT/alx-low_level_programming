#include <stdio.h>

/**
 * main - Prints alphabet in lower and upper case
 *
 * Return: 0
 */

	int main(void)

{
	char nic = 'a';
	char dor = 'A';

			while (nic <= 'z')
			{
				putchar(nic);
					nic++;
			}
			while (dor <= 'Z')
			{
				putchar(dor);
					dor++;
			}
			{
				putchar('\n');
			}
		return (0);
}
