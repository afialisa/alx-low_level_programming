#include "main.h"
/**
 * set_bit - A program that sets the value
 * of a bit to 1 at a given index.
 * @n: number
 * @index: set bit index
 *
 * Return: 1 if (Success), or -1 if an (Error)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int stbit;
if (index > (sizeof(unsigned long int) * 8 - 1))
return (-1);
stbit = 1 << index;
*n = *n | stbit;
return (1);
}
