/**
 * _strcmp - a function that compares two strings and returns a value
 * @s1: receives the first string
 * @s2: receives the second strings
 *
 * Return: the difference of the two string lengths if condition is met
 */
int _strcmp(char *s1, char *s2)
{
	int a, b;

	for (a = 0; s1[a] != '\0' && s2[a] != '\0'; a++)
		if (s1[a] != s2[a])
		{
			b = s1[a] - s2[a];
			break;
		}
		else
			b = s1[a] - s2[a];
	return (b);
}
