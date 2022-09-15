#include <stdio.h>

/**
 * main - Check Description
 *
 * Description: It prints 1 to 100, replaces mulitples of 3 with Fizz,
 * and multiples of 5 with Buzz
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}

		printf("Buzz");
		printf("\n");
	}

	return (0);
}
