#include<stdio.h>
/**
  *main - entry point
  *description: print alphabet in reverse
  *Return: always 0 (success)
  */
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
