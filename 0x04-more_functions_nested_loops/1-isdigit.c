#include "main.h"
/**
  *_isdigit - check if the character is digit
  *@c: the number to be checked
  *Return: 1 for character that is digit else 0
  */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
