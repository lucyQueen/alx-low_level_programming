#include "main.h"

/**
  *_strstr - function that locates a substring
  *@haystack:string
  *@needle: substring
  *Return: pointer
  */

char *_strstr(char *haystack, char *needle)
{
	int a;

	while (*haystack != '\0')
	{
		a = 0;
		while (*haystack == *needle && *haystack != '\0' && *needle != '\0')
			haystack++, needle++, a++;
		if (*needle == '\0')
			return (haystack - a);
		haystack -= (a - 1), needle -= a;
	}
	return ('\0');
}
