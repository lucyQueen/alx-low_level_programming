include <stdio.h>

int main(void)

/**
  *main - print alphabet in lower case
  *
  *Return: 0 if correct0
  */
{
	char letter;
	for (letter = 'a'; letter <= 'z'; letter++)

		putchar(letter);
	putchar('\n');
	return 0;
}
