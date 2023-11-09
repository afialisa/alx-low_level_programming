#include "function_pointers.h"
#include <stdio.h>
/**
* print_name - a program that prints a name using function pointers
* @name: add string
* @f: function pointer
* Return: null
*/
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}
