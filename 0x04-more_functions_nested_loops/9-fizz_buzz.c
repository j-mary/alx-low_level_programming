#include <stdio.h>

/**
 * main - Check Description
 *
 * Description: It prints 1 to 100,
 * replace mulitples of 3 with Fizz, and
 * multiples of 5 with Buzz
 * Return: Always success 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz\n");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz\n");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz\n");
		}
		else
		{
			printf("%d\n", i);
		}
	}

	return (0);
}
