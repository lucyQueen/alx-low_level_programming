#include "main.h""
/**
  *_isalpha - checks for alphabetic character
  *@b: b is an ascii character
  *Return: return 1 if b
  */
int _isalpha(int b)
{
	if (b >= 'a' && b <= 'z')
	{
	return (1);
	}
	else if (b >= 'A' && b <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

