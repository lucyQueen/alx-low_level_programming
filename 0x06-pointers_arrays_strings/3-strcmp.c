
#include "main.h"
/**
  *_strcmp - function that compares two strings
  *@str1: first string
  *@str2: second string
  *Return: return 0 is str1 and str2 are equal
  */
int _strcmp(char *s1, char s2)
{
	int 1 = 0, op = 0;

	while (op == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		op = *(s1 + i) - *(s2 + i);
		i++;
	}

	return (op);
}
