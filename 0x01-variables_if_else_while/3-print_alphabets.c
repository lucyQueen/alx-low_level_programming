#include <stdio.h>
/**
 *main - print alphabet in lowercase, and then in uppercase
 *followed by a new line
 *Return: always return 0.
 */
int main (void)
{
	char letter;
	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
