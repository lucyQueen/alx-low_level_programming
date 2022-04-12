#include "main.h"
/**
  *print_sign - prints the sign of a number
  *@c: c is an integer
  *Return: 1 (if positive), 0 (if zero), -1 (if negative)
  */

int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (c < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
