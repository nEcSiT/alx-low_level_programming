#include <stdio.h>
/**
 * main - Displays the sizes of space allocatted for each data
 * Code that displays the set spaces for a variable
 * Return: 0
*/
int main(void)
{
char a;
int b;
float c;
printf("Size of a char: %zu byte(s)\n", (unsigned)sizeof(a));
printf("Size of an int: %zu byte(s)\n", (unsigned)sizeof(b));
printf("Size of a long int: %zu byte(s)\n", (long unsigned)sizeof(b));
printf("Size of a long long int: %zu byte(s)\n", (long long unsigned)sizeof(b));
printf("Size of a float: %zu byte(s)\n", (unsigned)sizeof(c));
return (0);
}
