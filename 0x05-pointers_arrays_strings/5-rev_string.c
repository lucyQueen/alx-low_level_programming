#include "main.h"
/**
  *rev_string - print reversed string with new line
  *@b:pointer to string
  *Return: void
  */
void rev_string(char *b)
{
	int len, i, half;
	char temp;

	for (len = 0; b[len] != '\0'; len++)
	;

	i = 0;

	half = len / 2;

	while (half--)
	{
		temp = b[len - i - 1];
		b[len - i - 1] = b[i];
		b[i] = temp;
		i++;
	}
}
