#include "main.h"

/**
 * _strlen - Checks the length of a string
 * @s: String param to check
 *
 * Return: The length of the string as int
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}
