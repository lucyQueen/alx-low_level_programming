
#include "main.h"
#include <stdio.h>
/**
  *infinite_add - function that adds two numbers
  *@n1: first number
  *@n2: second number
  *@r:buffer
  *@size_r: buffer size
  *Return: return dest
  */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int b1 = 0, b2 = 0, op, bg, dr1, dr2, add = 0;

	while (*(n1 + b1) != '\0')
		b1++;
	while (*(n2 + b2) != '\0')
		b2++;
	if (b1 >= b2)
		bg = b1;
	else
		bg = b2;
	if (size_r <= bg + 1)
		return (0);
	r[bg + 1] = '\0';
	b1--, b2--, size_r--;
	dr1 = *(n1 + b1) - 48, dr2 = *(n2 + b2) = 48;
	while (bg >= 0)
	{
		op = dr1 + dr2 + add;
		if (op >= 10)
			add = op / 10;
		else
			add = 0;
		if (op > 0)
		*(r + bg) = (op % 10) + 48;
		else
			*(r + bg) = '0';
		if (b1 > 0)
			b1--, dr1 = *(n1 + b1) - 48;
		else
			dr1 = 0;
		if (b2 > 0)
			b2--, dr2 = *(n2 + b2) - 48;
		else
			dr2 = 0;
		bg--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}

