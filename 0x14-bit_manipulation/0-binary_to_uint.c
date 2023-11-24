#include "main.h"
/**
 * binary_to_uint - A function that converts a binary
 * number to an unsigned int.
 * @b: string pointer
 *
 * Return: decimal unsigned int, or 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
int i;
unsigned int num1;
num1 = 0;
if (!b)
return (0);
for (i = 0; b[i] != '\0'; i++)
{
if (b[i] != '0' && b[i] != '1')
return (0);
}
for (i = 0; b[i] != '\0'; i++)
{
num1 <<= 1;
if (b[i] == '1')
num1 += 1;
}
return (num1);
}
