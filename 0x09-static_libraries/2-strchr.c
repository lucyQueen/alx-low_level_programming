#include "main.h"

/**
  *_strchr - function that locates a character in a string
  *@a:string
  *@b:character
  *Return: pointer
  */

char *_strchr(char *a, char b)
{
	unsigned int i;

	for (i = 0; a[i] != '\0'; i++)
		if (a[i] == b)
			break;
	return (a[i] == b ? (a + i) : '\0');
}
