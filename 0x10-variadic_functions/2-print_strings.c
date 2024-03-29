#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: ","
 * @n: int type
 *
 * Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)

{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
	char *str = va_arg(args, char *);

	if (str != NULL)
		{
		printf("%s", str);
		}
	else
		{
		printf("(nil)");
		}

	if (i != n - 1 && separator != NULL)
		{
		printf("%s", separator);
		}
	}

va_end(args);
	printf("\n");
}

