#include "main.h"
/**
  *swap_int - swap variable
  *@a: pointer1
  *@b: pointer2
  *Return: void
  */

void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
