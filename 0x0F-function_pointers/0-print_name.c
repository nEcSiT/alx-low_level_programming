#include "function_pointers.h"

/**
 * print_name - funtion name
 * @name: return type
 * @f: funtion pointer
 * Return: 0;
 */

void print_name(char *name, void (*f)(char *))

{
	if (name && f)
		f(name);
}
