#include "main.h"

/**
 * print_line - Check Description
 * @n: The integer parameter
 *
 * Description: It draws a straight line in the terminal
 * Return: void
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (n > 0)
		{
			_putchar('_');
			n--;
		}

		_putchar('\n');
	}
}
