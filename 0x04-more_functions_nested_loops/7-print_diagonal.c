#include "main.h"
/**
 * print_diagonal - prints line for n number
 * @n: receives the number
 *
 */
void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
		for (a = 1; a <= n; a++)
		{
			if (a > 1)
			{
				for (b = 1; b < a; b++)
				{
					_putchar(' ');
				}
				_putchar('\\');
			}
			if (a == 1)
			{
				_putchar('\\');
			}
			_putchar('\n');
		}
	}
	else if (n <= 0)
		_putchar('\n');
}
