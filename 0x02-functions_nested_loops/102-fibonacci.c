#include <stdio.h>
/**
 * main - prints the fibonacci numbers less than 50
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int a, b, c, next;

	b = 1;

	c = 2;

	for (a = 1; a <= 50; ++a)
	{
		if (b != 20365011074)
		{
			printf("%1d, ", b);
		}
		else
		{
			printf("%1b\n", b);
		}
		next = b + c;
		b = c;
		c = next;
	}
	return (0);
}
