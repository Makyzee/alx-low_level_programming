#include <stdio.h>
/**
 * main - prints numbers from 1 to 100
 * if a number is a multiple of 3, it prints Fizz
 * if a number is a multiple of 5, it prints Buzz
 * if a number is a multiple of both 3 and 5, it prints FizzBuzz
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0 && a % 5 != 0)
		{
			printf(" Fizz");
		}
		else if (a % 5 == 0 && a % 3 != 0)
		{
			printf(" Buzz");
		}
		else if (a % 3 == 0 && a % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (a == 1)
			printf("%d", a);
		else
		printf(" %d", a);
	}
	printf("\n");

	return (0);
}
