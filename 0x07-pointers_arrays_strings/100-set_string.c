#include "main.h"

/**
  *_memcpy - function that sets the value of a pointer to a char
  *@dest: pointer to string
  *@src:pointer to source string
  *@n:number of string
  *Return:ponter
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
