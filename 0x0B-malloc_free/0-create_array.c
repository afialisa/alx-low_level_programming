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
unsigned int i;
str = malloc(sizeof(char) * size);
if (size == 0 || str == NULL)
return (NULL);
for (i = 0; i < size; i++)
str[i] = c;
return (str);
}
