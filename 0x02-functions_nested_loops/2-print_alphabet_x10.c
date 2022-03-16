#include "main.h"
/**
 * main - main block
 * Description:Print all aphabet x10
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
	int ch;
	int count;

	count = 0;
	while (count < 10)
	{
		for (ch = 'a' ; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}

		count++;
		_putchar('\n');
	}

}
