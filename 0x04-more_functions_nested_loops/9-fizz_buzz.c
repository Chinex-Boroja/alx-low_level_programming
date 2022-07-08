#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line
 * print Fizz for multiples of 3
 * print Buzz for multiples of 5
 * print FizzBuzz for multiples of 3 and 5
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (i % 5 == 0)
		{
			printf(" Buzz");
		}
		else if (i % 15 == 0)
		{
			printf(" FizzBuzz");
		}
		else
		{
			printf(" %d", i);
		}
	}

	printf("\n");

	return (0);
}
