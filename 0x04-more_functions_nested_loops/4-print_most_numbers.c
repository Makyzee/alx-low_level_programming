#include "main.h"
/**
 * print_most_numbers - prints numbers from 0 to 9 excluding 2 and 44
 *
 */
void print_most_numbers(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
		if (x != 52 && x != 50)

			_putchar(x);
	}
	_putchar('\n');
}
