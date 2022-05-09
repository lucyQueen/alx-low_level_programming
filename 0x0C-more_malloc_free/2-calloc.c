#include "main.h"

/**
  *_memset - input
  *@a:input
  *@b:input
  *@n:number of bytes
  *Return: string
  */

char *_memset(char *a, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		a[i] = b;
	}
	return (a);
}

/**
  *_calloc - function that allocates memory for an array, using malloc
  *@nmemb:number of elements
  *@size:nummber of bytes
  *
  *Return:pointer
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);
	_memset(p, 0, (nmemb * size));
	return (p);
}
