#include "main.h"
/**
  *_abs - function that computes the absolute value of an integer
  *@n: n is an integer
  *
  *Return: number
  */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
