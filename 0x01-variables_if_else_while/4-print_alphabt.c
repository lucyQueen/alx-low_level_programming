#include <stdio.h>
/**
 *main - prints the alphabet in lowercase
 *Print all the letters except q and e
 *Return: always 0.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}

	putchar('\n');

	return (0);
}
