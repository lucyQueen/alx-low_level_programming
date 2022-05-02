#include <stdio.h>
/**
  *main - program that prints the number of arguments passed into it
  *@argc:number of command line arguments
  *@argv:array containing programm command line arguments
  *Return: return 0
  */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}