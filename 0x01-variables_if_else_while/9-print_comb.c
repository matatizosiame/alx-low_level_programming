#include<stdio.h>
/**
  *main - entry point
  *description: print all possible combinations of single digits
  *Return: always 0 (success)
  */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
