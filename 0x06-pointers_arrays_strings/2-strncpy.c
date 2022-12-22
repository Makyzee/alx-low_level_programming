#include "main.h"
/**
 * _strncpy - copies a string in another
 * @dest: receives the first string
 * @src: receives the second string
 * @n: receives the n bytes
 *
 * Return : A pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != n;) a++;
	{
		dest[a] = src[a];
	}

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
