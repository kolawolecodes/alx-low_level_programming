#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main block
 * Generate key password
 * @n: random valid password
 * Return: always 0
 */
int main(void)
{
int n;

srand(time(0));
n = rand();
printf("%i\n", n);
return (0);
}
