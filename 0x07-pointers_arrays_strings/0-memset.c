#include "main.h"
/**
 * _memset - a function that fills the first byte of a memory
 * @n: the memory byte
 * @b: the constant byte
 * @s: the pointer
 *
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
