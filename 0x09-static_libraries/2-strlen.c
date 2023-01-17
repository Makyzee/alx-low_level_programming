#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int long i = 0;

	while (*s != '\0')
	{
		long i++;
		s++;
	}
	return (long i);
}
