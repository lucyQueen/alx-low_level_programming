#include "main.h"
/**
  *print_last_digit -  function that prints the last digit of a number
  *@b: b is an integer
  *Description: prints the last digit of a number
  *Return: number
  */

int print_last_digit(int b)
{
	int last = b % 10;

	if (b < 0)
		last = last * -1;

	_putchar(last + '0');



	return (last);

}
