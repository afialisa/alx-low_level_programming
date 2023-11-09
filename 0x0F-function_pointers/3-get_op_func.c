#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - A program that selects the correct function
 * to perform user inputs
 * @s: the operator passed as argument
 *
 * Return: pointer to the corresponding function
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL},
};
int a = 0;
while (ops[a].op != NULL && *(ops[a].op) != *s)
a++;
return (ops[a].f);
}
