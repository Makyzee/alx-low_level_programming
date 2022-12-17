#include "main.h"
/**
 * print_sign - checks for positive and negative integers
 * @n: integer to be checked
 *
 * Return: 1 or 0 or _1, if number is greater than zero, zero or less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('_');
	}
	return (-1);
}
