#include "main.h"

/**
 * print_triangle - Check Description
 * @size: The integer parameter
 *
 * Description: It prints a triangle followed by a new line
 * Return: void
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j, k;

		i = 0;
		k = size - 1;

		while (i < size)
		{
			for (j = 0; j < size; j++)
			{
				if (j < k)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}

			k--;
			i++;
			_putchar('\n');
		}
	}
}
