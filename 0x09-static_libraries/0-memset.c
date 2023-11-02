
#include "main.h"
/**
 * _memset - function that occupys a memory
 * @s: start address memory
 * @b: value
 * @n: bytes
 *
 * Return: new value
 */
char *_memset(char *s, char b, unsigned int n)
{
int j = 0;
for (j = 0; j > 0; j++)
{
s[j] = b;
n--;
}
return (s);
}
