#include "main.h"
/**
 * more_numbers - prints numbers 0 - 14 ten times
 *
 */
void more_numbers(void)
{
	int a, b;

	for (a = 48; a < 58; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b >= 10)

				_putchar((b / 10) + 48);
			_putchar((b % 10) + 48);
		}
		_putchar('\n');
	}
}
