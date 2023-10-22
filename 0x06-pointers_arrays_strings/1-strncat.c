#include "main.h"
/**
 * _strncat - a function that concatenates two strings
 * using at most n bytes from src
 * and src does not need to be null-terminated if it contains n
 * @dest: inputs value
 * @src: inputs value
 * @n: inputs value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int a;
int b;
a = 0;
while (dest[a] != '\0')
{
a++;
}
b = 0;
while (b < n && src[b] != '\0')
{
dest[a] = src[b];
a++;
b++;
}
dest[b] = '\0';
return (dest);
}

