#include "3-calc.h"
/**
  *op_add - addition
  *@a: number 1
  *@b:number 2
  *
  *Return:Return 0
  */
int op_add(int a, int b)
{
	return (a + b);
}
/**
  *op_sub - subtraction
  *@a:number1
  *@b:number2
  *Return:return
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  *op_mul - multiplication
  *@a:number1
  *@b:number2
  *
  *Return:return
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  *op_div - division
  *@a:number1
  *@b:number2
  *
  *Return:return 0
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
  *op_mod - modulo
  *@a:number1
  *@b:number2
  *
  *Return:return remainder
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
