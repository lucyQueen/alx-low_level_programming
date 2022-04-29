#include"main.h"
#include<stdio.h>
/**
  *_strlen_recursion - lenght of string
  *@str:pointer
  *
  *Return:return pointer
  */
int _strlen_recursion(char *str)
{
	int a;

	if (*str == '\0')
		return (0);
	str++;
	a = 1 + _strlen_recursion(str);
	return (a);
}
/**
  *_palindrome - function that returns 1 if a
  *string is a palindrome and 0 if not
  *@a:input
  *@b:input
  *@c:pointer
  *
  *Return:return 1
  */
int _palindrome(int b, int a, char *c)
{
	if (a > b / 2)
		return (1);
	else if (c[a] != c[b - a - 1])
		return (0);
	else
		return (_palindrome(b, a + 1, c));
}
/**
  *is_palindrome - function that returns 1 if
  *a string is a palindrome and 0 if not
  *@s: input
  *
  *Return:return integer
  */
int is_palindrome(char *s)
{
	int b;
	int y;

	b = _strlen_recursion(s);
	y = _palindrome(b, 0, s);
	return (y);
}
