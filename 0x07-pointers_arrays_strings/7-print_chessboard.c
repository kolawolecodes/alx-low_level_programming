#include "main.h"

/**
 * print_chessboard - print the chessboard, 2d array
 * @a: 2d array of chars
 *Return: void
 */
void print_chessboard(char (*a)[8])
{
	/*Declaring variables*/
	int i, j;
	char lower_s[] = {114, 107, 98, 113, 107, 98, 107, 114};
	char upper_s[] = {82, 75, 66, 81, 75, 66, 75, 82};

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (i == 1)
			{
				_putchar(80);
			}
			else if (i < 1)
			{
				_putchar(upper_s[j]);
			}
			else if (i == 6)
			{
				_putchar(112);
			}
			else if (i == 7)
			{
				_putchar(lower_s[j]);
			}
			else
				_putchar(' ');	
		}
		_putchar('\n');
	}
}
