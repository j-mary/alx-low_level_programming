#include "main.h"

/**
 * main - main function
 *
 * Description: It prints the word _putchar to stdout, followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char words[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(words[i]);
	}

	_putchar('\n');

	return (0);
}
