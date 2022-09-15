#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * positive_or_negative - Check Description
 * @n: The integer to check
 *
 * Description: Prints whether a number is positive,
 * negative or zero.
 *
 * Return: Always 0 (Success)
 */
int positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);

	return (0);
}
