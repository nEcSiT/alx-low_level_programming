#include <stdio.h>
#include "main.h"

/**
 * main - the entry point
 * @argc: number count
 * @argv: vetor or string
 * Return: 0
 */

int main(int argc, __attribute__((unused)) char *argv[])

{
int i, sum = 0;
	for(i = 0; i < argc; i++)
 	sum += i;
	printf("%d\n", sum);

return (0);
}
