#include "main.h"

/**
 * _isdigit - Write a function that checks for a digit
 * @c: variable assigned
 * Return: 1 if c is a digit els 0
 */

int _isdigit(int c)

{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
