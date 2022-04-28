#include "main.h"

/**
  *is_prime_number -  function that returns 1 if the input integer
  *is a prime number, otherwise return
  *@n:input
  *@c:iterator
  *Return:return number
  */

int is_prime_number(unsigned int n, unsigned int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(n, c + 1));
}
/**
  *is_prime_number - function that returns 1 if the input integer is a
  *prime number, otherwise return 0
  *@n: input
  *Return: return number
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
