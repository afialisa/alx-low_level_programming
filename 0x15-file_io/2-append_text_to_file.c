#include "main.h"
/**
 * get_bit - a program that returns the value of
 * a bit at a given index
 *
 * @n: check bit index
 *
 * @index: check bit index
 *
 * Return: the value of the bit, OR -1 if it is an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int divisor, check;
if (index > (sizeof(unsigned long int) * 8 - 1))
return (-1);
divisor = 1 << index;
check = n & divisor;
if (check == divisor)
return (1);
return (0);
}
