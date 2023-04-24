#include<stdio.h>
/**
  *main - entry ponit
  *description: print single digits base 10
  *Return: always 0 (success)
  */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
{
	putchar(n + 48);
}
putchar('\n');
return (0);
}
