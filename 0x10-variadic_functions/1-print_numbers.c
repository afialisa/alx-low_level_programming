#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_numbers - a program that prints numbers, followed by a new line
* @separator: string to be printed between numbers
* @n: number of integers passed to the function
* @...: number of variables to be printed
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list num1;
unsigned int digit;
va_start(num1, n);
for (digit = 0; digit < n; digit++)
{
printf("%d", va_arg(num1, int));
if (digit != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(num1);
}
