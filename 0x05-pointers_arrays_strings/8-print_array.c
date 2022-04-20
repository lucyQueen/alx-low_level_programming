#include "main.h"
#include <stdio.h>
/**
  *print_array - print number of elements of an array
  *@a: int type array pointer
  *@b: int type
  *Description: numbers should be separated by by comma
  */
void print_array(int *a, int b)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(",");
		}
	}
	printf("\n");

}
