#include "main.h"
/**
 * _strcmp - a function that compares two string
 * @s1: inputs value
 * @s2: inputs value
 *
 * Return: s1[i] - s2[i]
 */
int _strcmp(char *s1, char *s2)
{
int a = 0;
while (s1[a] != '\0' && s2[a] != '\0')
{
if (s1[a] != s2[a])
{
return (s1[a] - s2[a]);
}
a++;
}
return (0);
}
