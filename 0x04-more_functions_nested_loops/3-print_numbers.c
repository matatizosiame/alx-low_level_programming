#include "main.h"
/**
  *_numbers - prints the numbers, from 0 to 9
  *@void: print numbers from 0 to 9
  *Return: alwaays 0 (success)
  */
void print_numbers(void)
{
	int a;

	for (a = 0; a < 10; a++)
{
	_putchar(a + '0');
}
_putchar('\n');
}
