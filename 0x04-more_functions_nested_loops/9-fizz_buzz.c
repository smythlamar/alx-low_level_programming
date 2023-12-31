#include <stdio.h>
/**
 * main - func printf the numbers from 1-100, but for multiples of three,
 * Fizz is printed insteas of th number, for multiples of five,
 * Buzz, and for multiples of both three and five, FizzBuzz
 *
 * Return: Always o.
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3) == 0 && (num % 5) == 0)
			printf("FizzBuzz");

		else if ((num % 3) == 0)
			printf("Fizz");

		else if ((num % 5) == 0)
			printf("Buzz");

		else
			printf("%d", num);

		if (num == 100)
			continue;
		printf(" ");
	}

	printf("\n");

	return (0);
}
