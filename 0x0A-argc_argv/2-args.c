#include <stdio.h>
/**
  *main - program that prints all arguments it receives
  *@argc:number of command line arguments
  *@argv:array containing command line arguments
  *Return: return 0
  */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
