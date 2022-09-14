#include <ctype.h>
#include "main.h"

/**
 * _islower - Check description
 * @c: The character to be checked
 *
 * Description: It checks for lower character
 * Return: 1 if the character is lowercase. 0 otherwise
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
