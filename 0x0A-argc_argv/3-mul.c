#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - entry point
 * @argc: count
 * @argv: strings
 * Return: 0
 */

int main(int argc, __attribute__((unused)) char *argv[])

{
int i, mul = 1, y;
	for (i = 1; i < argc; i++)

	y = strtol (argv[i], NULL, 10);

		mul = mul * y;

	printf("%d\n", mul);

return (0);
}
