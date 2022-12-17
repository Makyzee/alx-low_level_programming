#include "main.h"
/**
 * print_line - prints line for n number
 * @n: receives the number
 *
 */
void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 1; a <= n; a++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
	else if (n <= 0)
		_putchar('\n');
}
