#include "main.h"
/**
 * _pow - A function that calculates (base ^ power)
 * @base: exponent base
 * @power: exponent power
 *
 * Return: (base ^ power) value
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
unsigned long int num1;
unsigned int i;
num1 = 1;
for (i = 1; i <= power; i++)
num1 *= base;
return (num1);
}
/**
 * print_binary - A function that prints numbers in binary notation
 * @n: number
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
unsigned long int div, chk;
char flag;
flag = 0;
div = _pow(2, sizeof(unsigned long int) * 8 - 1);
while (div != 0)
{
chk = n & div;
if (chk == div)
{
flag = 1;
_putchar('1');
}
else if (flag == 1 || div == 1)
{
_putchar('0');
}
div >>= 1;
}
}
