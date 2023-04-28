#include "main.h"
/**
  *print_triangle - a function that prints a triangle
  *size: is the size of the triangle
  *Return: new line if size is 0 or less
  */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	int a;
	int b;

	for (a = 1; a <= size; a++)
	{
		for (b = 1; b <= a; b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
