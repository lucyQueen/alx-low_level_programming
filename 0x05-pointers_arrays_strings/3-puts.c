#include "main.h"
#include <stdio.h>
/**
  *_puts - print string
  *@str: pointer to string
  *Return: void
  */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
	putchar(str[i]);
	i++;
	}
	_putchar('\n');
}
