#include "main.h"
/**
 * binary_to_uint - a function that converts a binary number
 *
 * @b: the pointer to a string containing a binary number
 *
 * Return: unsigned int with decimal value of binary number, or 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
int a;
unsigned int num1;
num1 = 0;
if (!b)
return (0);
for (a = 0; b[a] != '\0'; a++)
{
if (b[a] != '0' && b[a] != '1')
return (0);
}
for (a = 0; b[a] != '\0'; a++)
{
num1 <<= 1;
if (b[a] == '1')
num1 += 1;
}
return (num1);
}
