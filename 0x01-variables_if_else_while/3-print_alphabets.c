#include<stdio.h>
/**
  *main - entry point
  *description: print lowercase and uppercase alphabet
  *Return: always 0 (success)
  */
int main(void)
{
	int n = 97;
	int m = 65;

	while (n <= 122)
		n++;
	{
		putchar(n);
	}
	while (m <= 65)
		m++;
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
