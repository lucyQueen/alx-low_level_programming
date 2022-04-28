#include "main.h"

/**
  *prime -  function that returns 1 if the input integer
  *is a prime number, otherwise return
  *@n:input
  *@c:iterator
  *
  *Return:return number
  */

int prime(unsigned int n, unsigned int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	return (0 + prime(n, c + 1));
}
/**
  *is_prime_number - function that returns 1
  *@n:integer
  *
  *Return: integer
  */

int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, 2));
}
