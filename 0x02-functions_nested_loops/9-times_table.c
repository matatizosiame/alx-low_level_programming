#include "main.h"
/**
  *main - entry point
  *description:  prints the 9 times table, starting with 0
  *
  *Return: always 0 (success)
  */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int product = i * j;

			if (j == 0)
			{
				_putchar('0');
			}
			else if (product <= 9)
			{
				_putchar(' ');
				_putchar(product + '0');
			}
			else
			{
				_putchar9((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
