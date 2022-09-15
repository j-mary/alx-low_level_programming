#include "main.h"

/**
 * more_numbers - Check Description
 *
 * Description: It prints the numbers from 0 to 14 ten times,
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int j;

	i = 0;

	while (i <= 9)
	{
		for (j = 0; j <= 14; j++)
		{
			int first_num;
			int second_num;

			if (j < 10)
			{
				second_num = j;
			}
			else
			{
				first_num = j / 10;
				second_num = j % 10;
				_putchar(first_num + '0');
			}

			_putchar(second_num + '0');
		};

		i++;

		_putchar('\n');
	}
}
