#include <stdio.h>
/**
 * main - main block
 * Description:print all lowercase alphabet except q and e
 * Return:Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	if (ch == 'q')
		continue;
	else if (ch == 'e')
		continue;
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
