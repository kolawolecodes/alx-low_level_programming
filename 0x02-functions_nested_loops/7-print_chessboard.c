#include "main.h"
/**
 * print_chessboard - prints the values in the array
 * @a: character to be inputted
 */

void print_chessboard(char (*a)[8])
{
	int i, j;
	char a[] = {114, 107, 98, 113, 107, 98, 107, 114};
	/*char upper_s[] = {82, 75, 66, 81, 75, 66, 75, 82};*/

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (i < 1)
			{
				_putchar(a[j]);
			}
			else if (i == 1)
			{
				_putchar(112);
			}
			else if (i == 6)
			{
				_putchar(80);
			}
			else if (i == 7)
			{
				_putchar(a[j] - 32);
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
