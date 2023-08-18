#include <stdio.h>
/**
* Main - function that prints from 1-100 with a multples of 3
*	Fizz is printed in place of the number, for multples of five,
*	Buzz, and for the multiples of both 3 and 5, FizzBuzz.
* Return: 0
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
