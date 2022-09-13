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
	char words[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(words[i]);
	}

	_putchar('\n');

	return (0);
}
