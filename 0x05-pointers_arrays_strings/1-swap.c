#include "main.h"

/**
 * swap_int - swaps the value of two intergers
 * @a: pointer param 1
 * @b: pointer param 2
 * Return: void
 */
void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
