#include<stdio.h>
/**
  *main - entry point
  *description: print single digits base 10
  *Return: always 0 (success)
  */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}
	printf("\n");
	return (0);
}
