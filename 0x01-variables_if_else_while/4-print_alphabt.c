#include <stdio.h>
/**
 * main - main block
 * Description:print all lowercase alphabet except q and e
 * Return:Always 0 (Success)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet == 'q')
		continue;
		else if (alphabet == 'e')
		continue;
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
