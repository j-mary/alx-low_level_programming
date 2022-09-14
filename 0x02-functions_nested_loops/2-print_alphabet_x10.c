#include "main.h"

/**
 * print_alphabet_x10 - Check description
 * Description: It prints the alphabets in lower case 10 times,
 * followed by a new line
 * Return: Nothing.
 */

void print_alphabet_x10(void)
{
	char words[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	int j = 0;

	while (j < 10)
	{
		for (i = 0; i < 26; i++)
		{
			_putchar(words[i]);
		}

		_putchar('\n');

		j += 1;
	}

}
