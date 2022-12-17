/**
 *  _isdigit - checks if character entered is a digit from 0 to 9
 *  @c: receives the number
 *
 *  Return: 1 if the number is a digit from 0 to 9 and 0 otherwise
 */
int _isdigit(int c)
{
	return (c <= '9' && c >= '0');
}
