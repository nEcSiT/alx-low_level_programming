#include "main.h"

/**
 * _islower - cheut if char is lower
 * @c: is the assign char
 * Return: 1 if char is lower else 0
 */

int _islower(int c)

{

if (c >= 'a' && c <= 'z')
	return (1);
else
	return (0);
}
