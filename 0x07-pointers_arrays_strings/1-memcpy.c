#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: a storage memory
 * @src: memory to copy
 * *@n: number of bytes
 *
 * Return: copied memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int a = 0;
int i = n;
for (; a < i; a++)
{
dest[a] = src[a];
n--;
}
return (dest);
}
