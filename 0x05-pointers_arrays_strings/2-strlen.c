#include "main.h"
/**
 * _strlen - this function change the initial.
 * @s: this is a parameter to change.
 * Return: tuu
 */
int _strlen(char *s)
{
	int tuu;

	while (*s != '\0')
	{
		tuu = tuu + 1;
		s = s + 1;
	}
	return (tuu);
}
