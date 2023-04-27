#include "main.h"
/**
  *print_diagonal - function that draws a diagonal line
  *@n: the number of times the character \ should be printed
  *Return: empty
  */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	int a;
	int b;

	for (a = 0; a < n; a++)
	{
		for (b = 0; b < a; b++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
