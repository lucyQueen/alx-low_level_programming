#include "main.h"
/**
  *print_alphabet - print_alphabet, in lowercase
  *followed by a new line
  *Return: program returns void
  */
void print_alphabet(void)
{
	char b = 'a';

	while (b <= 'z')
	{
		_putchar(b);
		b++;
	}
	_putchar('\n');

}
