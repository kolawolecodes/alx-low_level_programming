#include "main.h"
/**
* print_number - that prints an integer
* @n: print int
* Return: Always 0 (success)
*/
void print_number(int n)
{
unsigned int j;

if (n < 0)
{
j = -n;
_putchar('_');
}
else
{
j = n;
}
if (j / 10)
{
print_number(j / 10);
}
_putchar((j % 10) + '0');
}
