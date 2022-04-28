#include "main.h"

/**
  *prime -  function that returns 1 if the input integer
  *is a prime number, otherwise return
  *@i:input
  *@n:iterator
  *
  *Return:return number
  */

int prime(int i, int n)
{
	if (n < 2 || !(n % i))
		return (0);
	else if (i > n / 2)
		return (1);
	else
		return (prime(i + 1, n));
}

/**
  *is_prime_number - function that returns 1
  *@n:integer
  *
  *return: integer
  */

int is_prime_number(int n)
{
	return (prime(2, n));
}
