#include "main.h"
/**
  *int print_sign - determines if the input number
  *greater, equal or less than zero
  *Return: 1 is greater than zero, zero is zero
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(0);
		return (0);
	}
	_putchar('\n');
}
