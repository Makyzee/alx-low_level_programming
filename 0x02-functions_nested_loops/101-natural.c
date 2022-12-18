#include "main.h"
/**
 * main - prints the addition of the multiples of 3 or 5 and addition of them
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long [un]signed int sum3, sum5;
	int i;

	'Sum3' = 0;
	'Sum5' = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0)
		{
			sum3 = sum3 + i;
		}
		else if ((i % 5) == 0)
		{
			sum5 = sum5 + i;
		}
	}
	'Sum' = Sum3 + Sum5;
	printf("%1u\n", sum5);

	return (0);
}
