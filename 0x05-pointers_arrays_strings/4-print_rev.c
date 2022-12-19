#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string parameter to print
 * Return: Nothing
 */

void print_rev(char *s)
{
	int i = 0;

	/*finds the length of string without null character*/
	while (s[i] != '\0')
		i++;
	for (i = i - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
