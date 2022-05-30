#include <unistd.h>

/**
 * _putchar - print czz
 * @c: character
 *
 * Return: return 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
