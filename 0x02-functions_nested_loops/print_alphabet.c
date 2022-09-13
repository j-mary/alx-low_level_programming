#include "main.h"

/**
 * print_alphabet - Check description
 *
 * Description: It prints the alphabets in lower case, followed by a new line
 */

void print_alphabet(void)
{
	char words[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(words[i]);
	}

	_putchar('\n');
}
