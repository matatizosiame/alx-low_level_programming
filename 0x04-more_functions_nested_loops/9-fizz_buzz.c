#include "main.h"
#include<stdio.h>
/**
  *main - entry point
  *description: a program that prints the numbers from 1 to 100
  *Return: always 0
  */
int main(void)
{
	int a;

	for (a = 1; a <= 100, a++)
	{
		if (a % 3 == 0 && a % 5 == 0)
		{
			puts("FizzBuzz");
		}
		else if (a % 3 == 0)
		{
			puts("Fizz");
		}
		else if (a % 5 == 0)
		{
			puts("Buzz");
		}
		_putchar('\n');
		return (0);
	}
}
