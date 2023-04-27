#include "main.h"
/**
  *print_square - a function that prints a square, followed by a new line
  *@size: numer of squares/number of times
  *reeturn: empty
  */
void print_square(int size)
{
	int a;
	int b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
