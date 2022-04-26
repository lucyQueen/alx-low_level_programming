#include "main.h"

/**
  *_memset - function that fills memory with a constant byte
  *@s: pointer to string
  *@b: char
  *@n: number of bytes
  *Return:pointer to string
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
