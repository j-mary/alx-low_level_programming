#include <ctype.h>

/**
 * _isdigit - Check Description
 * @c: The character to be checked
 *
 * Description: It checks for character that is a digit
 * Return: 1 if the character is a digit. 0 otherwise
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
