#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main block
 * description: get the value of a random number and print if it is positive, negative or zero
 * return: always 0 (success)
 */
int main(void)
{
	int n;
	n = rand () - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else (n == 0)
		printf("%d is zero\n", n);
	return (0);
} 
