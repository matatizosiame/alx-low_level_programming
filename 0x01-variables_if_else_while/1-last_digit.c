#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
  *main - entry point
  *description: print the last digit of the number
  *Return: 0 always (success)
  */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	if (ld > 0)
	{
		printf("last digit of %d  is %d and  greater than 5\n", n, ld);
	}
	else if (ld == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, ld);
	}
	else
	{
		printf("last digit of %d is %d and less than 6 and not 0\n", n, ld);
	}
	return (0);
}
