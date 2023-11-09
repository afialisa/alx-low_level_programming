#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - A program that returns the sum of all parameters
 * @n: number of parameters passed to a function
 * @...: sum parameters
 *
 * Return: 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int a, sum = 0;
va_start(ap, n);
for (a = 0; a < n; a++)
sum += va_arg(ap, int);
va_end(ap);
return (sum);
}
