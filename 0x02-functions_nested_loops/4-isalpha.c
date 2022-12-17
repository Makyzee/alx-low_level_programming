/**
 * _isalpha - checks for lowercase or uppercase character
 * @c: receives the character to check
 *
 * Return: 1 (Lowecase or Uppercase), 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
