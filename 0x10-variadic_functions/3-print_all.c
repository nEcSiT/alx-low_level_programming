#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - print everything
 * @format: char type
 * Return: 0;
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *str;

	va_start(args, format);

	while (format && format[i])
	{
	switch (format[i])
	{
	case 'i':
		printf("%d", va_arg(args, int));
		break;
	case 'f':
		printf("%f", va_arg(args, double));
		break;
	case 'c':
		printf("%c", va_arg(args, int));
		break;
	case 's':
		str = va_arg(args, char *);
		if (str != NULL)
		{
			printf("%s", str);
		}
		else
		{printf("(nil)"); }
		break;
	default:
		break;
	}

	if (format[i + 1] && (format[i] == 'c' || format[i] == 'f'
		|| format[i] == 'i' || format[i] == 's'))
	{printf(", "); }
	i++;
	}
	printf("\n");
	va_end(args);
}
