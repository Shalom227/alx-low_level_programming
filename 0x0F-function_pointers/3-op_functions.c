#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - computes the sum of two numbers
 * @a: first number to be added
 * @b: second number to be added
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - computes the difference of two numbers
 * @a: first number to be subtracted
 * @b: second number to be subtracted
 * Return: the difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - computes the multiplication of two numbers
 * @a: first number to be multiplied
 * @b: second number to be multiplied
 * Return: the product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - computes the division of two numbers, a and b
 * @a: first number to be divided by second number
 * @b: second number
 * Return: the result of the division of a by b
 */

int op_div(int a, int b)
{
	return (a % b);
}

/**
 * op_mod - computes the remainder of the division of a by b
 * @a: first number
 * @b: second number
 * Return: the remainder of the division of a by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
