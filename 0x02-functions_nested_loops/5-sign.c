#include "main.h"

/**
 * print_sign - Check Description
 * @n: The number to check
 * Description: Tt prints the sign of the number
 * Return: 1 if number is positive. 0 otherwise
 */
int print_sign(int n)
{
	int value;

	if (n > 0)
	{
		value = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		value = 0;
		_putchar('0');
	}
	else
	{
		value = -1;
		_putchar('-');
	}

	return (value);
}
