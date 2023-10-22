#include "main.h"
#include <stdio.h>
/**
 * print_buffer - a function that prints a buffer
 * @b: buffer
 * @size: size
 * Return: void
 */
void print_buffer(char *b, int size)
{
int a, b, c;
a = 0;
if (size <= 0)
{
printf("\n");
return;
}
while (a < size)
{
b = size - a < 10 ? size - a : 10;
printf("%08x: ", a);
for (c = 0; c < 10; c++)
{
if (c < b)
printf("%02x", *(b + o + i));
else
printf("  ");
if (c % 2)
{
printf(" ");
}
}
for (c = 0; c < b; c++)
{
int d = *(b + o + i);
if (d < 32 || d > 132)
{
d = '.';
}
printf("%c", d);
}
printf("\n");
a = a + 10;
}
}
