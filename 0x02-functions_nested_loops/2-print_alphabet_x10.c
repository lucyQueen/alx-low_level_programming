#include "main.h"
/**
  *print_alphabet_x10 - adds integers and prints 10 times
  * function that prints 10 times the alphabet.
  *Return: return void
  */
void print_alphabet_x10(void)
{

	int round = 0;
	char b = 'a';

	while (round < 10)
	{
		b = 'a';
		while (b <= 'z')
		{
			_putchar(b);
			b++;
		}
		_putchar('\n');

		round++;
	}
}
