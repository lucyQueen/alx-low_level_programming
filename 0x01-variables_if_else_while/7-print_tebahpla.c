#include <stdio.h>
/**
  *main - program that prints the lowercase alphabet in reverse
  *followed by a new line
  *Return: always return 0
  */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
