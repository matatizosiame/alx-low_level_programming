#include<stdio.h>
/**
  *main - entry point
  *description: print lowercase alphabets
  *Return: always 0 (success)
  */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
