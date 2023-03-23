#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sums all arguement
 * @n: the arguement
 *
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)

{
	if (n == 0)
	{
		return (0);
	}
	int sum;
	va_list hp;
	unsigned int i;

	va_start(hp, n);

		for (i = 0; i < n; i++)

		sum += va_arg(hp, int);

	va_end(hp);

	return (sum);
}
