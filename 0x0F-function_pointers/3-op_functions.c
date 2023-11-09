#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
* op_add - A program that returns the sum of two numbers
* @a: first number
* @b: second number
*
* Return: sum of a + b
*/
int op_add(int a, int b)
{
return (a + b);
}
/**
* op_sub - A program that returns the difference of two numbers.
* @a: first number.
* @b: second number.
*
* Return: difference of a and b.
*/
int op_sub(int a, int b)
{
return (a - b);
}
/**
* op_mul - A program that returns the product of two numbers
* @a: first number
* @b: second number
*
* Return: product of a and b
*/
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div - A program that returns the division of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: quotient of a and b
 */
int op_div(int a, int b)
{
return (a / b);
}
/**
* op_mod - A program that returns the remainder of the division of two numbers
* @a: first number
* @b: second number.
*
* Return: The remainder of a divided by b
*/
int op_mod(int a, int b)
{
return (a % b);
}
