#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * more headers goes there
 *The code runs a negative and positive integers with
 * zero inclusive
*/

int main(void)
{
int n;
/**
 * betty style doc for function main goes there
 * main - the entry point of the code void
 * return: 0 and teminate the code
*/

srand(time(0));
/* runs at a time*/

n = rand() - RAND_MAX / 2;
/* returns a value*/

/**
 * your code goes there
 * Which runs the value randomly place into it
*/

if (n > 0)
{
printf(n, "%d\n is positive");
}
/* Prints positive number*/

else if (n < 0)
{
printf(n, "%d\nis negative");
}
/* Prints a negative number*/

else
{
n = 0;
printf(n, "%d\nis zero");
}
/* Prints zero for the value*/

return (0);
/* Return: 0*/
}

