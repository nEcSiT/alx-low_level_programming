#include "main.h"
/**
 * _isalpha - checks for alohabets
 * @c: the assigned char to bw check
 * Return: 1 if it is a letter lower or upper else 0
 */

int _isalpha(int c)

{
	if ((c >= 'a' &&  c <= 'z') || (c >= 'A' && c  <=  'Z'))
		return (1);
	else
		return (0);
}
