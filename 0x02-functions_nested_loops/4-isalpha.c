#include <ctype.h>
#include "main.h"

/**
 * _isalpha - Check description
 * @c: The character to be checked
 *
 * Description: It checks for alphabetic character
 * Return: 1 if the character is an alphabet. 0 otherwise
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
