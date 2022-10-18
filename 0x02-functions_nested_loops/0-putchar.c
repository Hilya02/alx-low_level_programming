#include "main.h"
/**
 * main - prints the string "_putchar" from a character array.
 * Return: 0 on success.
 */
int main(void)
{
	char c[] = "_";
	char c[] = "p";
	char c[] = "u";
	char c[] = "t";
	char c[] = "c";
	char c[] = "h";
	char c[] = "a";
	char c[] = "r";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
