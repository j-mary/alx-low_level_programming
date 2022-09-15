#include <ctype.h>

/**
 * _isupper - Check Description
 * @c: The character to be checked
 *
 * Description: It checks for upper case character
 * Return: 1 if the character is uppercase. 0 otherwise
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
