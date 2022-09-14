#include "main.h"

/**
 * print_last_digit - Check Description
 * @i: The integer to check
 * Description: It prints the last digit of the integer
 * Return: The last digit of the integer
 */

int print_last_digit(int i)
{
	int n;

	if (i < 0)
	{
		n = -1 * (i % 10);
	}
	else
	{
		n = i % 10;
	}

	_putchar((n % 10) + '0');

	return (n % 10);
}
