#include "main.h"

/**
 * print_numbers - Check Description
 *
 * Description: It prints the numbers from 0 to 9
 * Return: void
 */
void print_numbers(void)
{
	char nums[10] = "0123456789";
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(nums[i]);
	}

	_putchar('\n');
}
