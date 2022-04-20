#include "main.h"
/**
  *print_rev - print recersed string
  *@b: pointer to string to print
  *Return: void
  */
void print_rev(char *b)
{
	int i = 0;

	while (b[i])
		i++;

	while (i--)
	{
		_putchar(b[i]);
	}
	_putchar('\n');
}
