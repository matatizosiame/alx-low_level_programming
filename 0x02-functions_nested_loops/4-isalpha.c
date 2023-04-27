#include "main.h"
/**
  *_isalpha - shows 1 if the input is a
  *letter another case shows 0
  *
  *Return: always 0 (success)
  */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
