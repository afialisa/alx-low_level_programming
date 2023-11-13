#include "main.h"
#include <stdlib.h>
/**
 * create_array - a program that creates an array of size
 * @size: array size
 * @c: assigned char
 * Description: creates an array of size with an assigned char c
 * Return: array pointer or null if it fails
 */
char *create_array(unsigned int size, char c)
{
char *str;
unsigned int a;
str = malloc(sizeof(char) * size);
if (size == 0 || str == NULL)
return (NULL);
for (a = 0; a < size; a++)
str[a] = c;
return (str);
}
