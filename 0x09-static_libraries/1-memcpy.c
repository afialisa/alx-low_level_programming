#include "main.h"
/**
 * _memcpy - a memory function
 * @dest: memory storage
 * @src: copy memory
 * @n: bytes
 *
 * Return: new memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int a = 0;
int b = n;
for (b = 0; a < b; a++)
{
dest[a] = src[a];
n--;
}
return (dest);
}
