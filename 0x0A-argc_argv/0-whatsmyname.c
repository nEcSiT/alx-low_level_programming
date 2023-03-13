#include <stdlib.h>
#include "main.h"

/** 
 * main - the entry point
 * @argc: the argument count
 * @argv: the arguement vector
 * Return: 0
 */

int main(int argc, char *argv[])

{
int i;

	for (i = 0; i < argc; i++)

		_putchar(*argv[i]);

	_putchar('\n');

return (0);
}
