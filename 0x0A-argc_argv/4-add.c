#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - the entry point
 * @argc: number count
 * @argv: vetor or string
 * Return: 0
 */

int main(__attribute__((unused)) int argc, char *argv[])

{

int i, sum = 0;

		for (i = 0; i < argc; i++)


			sum += atoi(argv[i]);

	if (_isalpha(sum))

		printf("Error\n");

	else
		printf("%d\n", sum);


return (0);

}
