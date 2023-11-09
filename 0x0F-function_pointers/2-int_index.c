#include "function_pointers.h"
/**
* int_index - A function that returns the
* index of the first element
* @array: array
* @size: number of elements in an array
* @cmp: pointer to function to be used
* Return: Always 0 (Success)
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int a;
if (array == NULL || size <= 0 || cmp == NULL)
return (-1);
for (a = 0; a < size; a++)
{
if (cmp(array[a]))
return (a);
}
return (-1);
}
