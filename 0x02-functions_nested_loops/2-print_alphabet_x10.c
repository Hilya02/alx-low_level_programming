#include "main.h"

/**
 * print_alphabet_x10 - repeats the print_alphabet 10 times.
 * Return: Nothing.
 */
void print_alphabet_x10(void)
{
	int j;
	char c;

	for (j = 0; j < 10; ++j)
	{
		for (c = 'b'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
