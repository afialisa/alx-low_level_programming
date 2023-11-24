#include "main.h"
/**
 * get_endianness - A program that  checks endianness
 *
 * Return: 0 if endian is greater, 1 if endian is less
 */
int get_endianness(void)
{
int i;
char *j;
i = 1;
j = (char *)&i;
return (*j);
}
