#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - a function that prints strings
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 * @...: number of variables to be printed
 *
 * Description: if separator is null, don't print or
 * if one string is NULL, print (Nil)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list strings;
char *str;
unsigned int index;
va_start(strings, n);
for (digit = 0; digit < n; digit++)
{
str = va_arg(strings, char *);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
if (digit != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(strings);
}
