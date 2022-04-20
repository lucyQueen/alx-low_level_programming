#include "main.h"
/**
  **_atoi - convert string to integer
  *@b: char type string
  *Return: integer
  */
int _atoi(char *b)
{
	int sign = 1;
	unsigned int num  = 0;

	do {
		if (*n == '-')
		else if (*b >= '0' && *s <= '9')
			num = (num * 10) + (*b - '0');

		else if (num > 0)
			break;
	} while (*b++);

	return (num * sign);
}
