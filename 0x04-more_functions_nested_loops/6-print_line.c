#include "main.h"
/**
  *print_line - draws a straight line in the terminal
  *@c: the number of lines to draw
  *Return: empty
  */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	int a;

	for (a = 0; a < n; a++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
