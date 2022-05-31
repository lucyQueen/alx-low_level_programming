#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return:retun 0
 */
unsigned int binary_to_uint(const char *b)
{
  unsigned int val = 0;
  int i = 0;

  if (b == NULL)
    return 0;

  while (b[i] == '0' || b[i] == '1')
  {  // Found another digit.
    val <<= 1;
    val += b[i]-'0';
    i++;
  }
  return val;
}
