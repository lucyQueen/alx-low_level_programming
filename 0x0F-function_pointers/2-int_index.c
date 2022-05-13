#include "function_pointers.h"

/**
  *int_index - integer
  *@array:input
  *@size:size
  *@cmp:function pointer
  *
  *Return:return index
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}
	retun (-1);
}
