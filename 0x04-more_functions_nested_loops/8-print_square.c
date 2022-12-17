#include "main.h"
/**
 * print_square - prints line for size number
 * @size: receives the number
 *
 */
void print_square(int size)
{
	int a, b;

	if (size > 0)
	{
		for (a = 1; a <= size; a++)
		{
			for (b = 1; b <= size; b++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else if (size <= 0)
		_putchar('\n');
}
