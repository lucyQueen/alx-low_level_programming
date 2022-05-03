#include "main.h"
/**
  *_strlen - length of a string
  *@b: pointer to string
  *Return: void
  */
int _strlen(char *b)
{
	int i = 0;

	while (b[i])
		i++;

	return (i);
}
