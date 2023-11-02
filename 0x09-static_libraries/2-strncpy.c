#include "main.h"
/**
 * _strncpy - a function that copy's strings
 * @dest: value to be inputed
 * @src: value to be inputed
 * @n: value to be inputed
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int a;
a = 0;
while (a < n && src[a] != '\0')
{
dest[a] = src[a];
a++;
}
while (a < n)
{
dest[a] = '\0';
a++;
}
return (dest);
}
