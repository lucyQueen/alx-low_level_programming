#include "main.h"

/**
  *power_operation - function that returns the natural square root of a number
  *@n:input
  *@c:iterator
  *Return:return square
  */
int power_operation(int n, int c)
{
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
			return (c);
		else
			return (-1);
	}
	return (0 + power_operation(n, c + 1));
}
