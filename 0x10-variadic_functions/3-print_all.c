#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
* print_all - a function that prints anything
* @format: lists type of arguments passed to a function
*
* ...: Variables to be printed
*/
void print_all(const char * const format, ...)
{
int a = 0;
char *str, *mat = "";
va_list list;
va_start(list, format);
if (format)
{
while (format[a])
{
switch (format[a])
{
case 'c':
printf("%s%c", mat, va_arg(list, int));
break;
case 'i':
printf("%s%d", mat, va_arg(list, int));
break;
case 'f':
printf("%s%f", mat, va_arg(list, double));
break;
case 's':
str = va_arg(list, char *);
if (!str)
str = "(nil)";
printf("%s%s", mat, str);
break;
default:
a++;
continue;
}
mat = ", ";
a++;
}
}
printf("\n");
va_end(list);
}
