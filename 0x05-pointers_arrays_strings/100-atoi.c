#include "main.h"
/**
  **_atoi - convert string to integer
  *@b: char type string
  *Return: integer
  */
int _atoi(char *b)
{
	int 1;
	int res = 0;
	int sig = -1;
	int brk = 0;

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '_')
			sig = sig * -1;
		if (b[i] >= '0' && b[i] <= '9')
		{
			res = res * 10;
			res -= (s[i] - '0');
			brk = 1;
		}
		else if (brk == 1)
			break;
	}
	res = sig * res;
	return (res);
}

