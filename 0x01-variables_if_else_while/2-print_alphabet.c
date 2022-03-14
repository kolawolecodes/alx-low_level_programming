#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main block
 * Description:print alphabet a to z in lower case
 * Return:Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
