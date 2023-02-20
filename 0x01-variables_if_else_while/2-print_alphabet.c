#include <stdio.h>

/**
 * main - a function the prints alphabet in small letters
 *
 * Return: 0
 */
	int main(void)
{
	char ch = 'a';

	while ('a' <= 'z')
		{
			putchar(ch);
			ch++;
		}
		{
			putchar('\n');
		}
		return (0);
}
