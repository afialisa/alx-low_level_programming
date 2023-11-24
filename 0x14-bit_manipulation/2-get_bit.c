#include"main.h"
/**
 * get_bit - A program that returns the value
 * of a bit at a given index.
 * @n: check bits number
 * @index: check bit index
 *
 * Return: value of bit, or -1 if (error)
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int div, chk;
if (index > (sizeof(unsigned long int) * 8 - 1))
return (-1);
div = 1 << index;
chk = n & div;
if (chk == div)
return (1);
return (0);
}
