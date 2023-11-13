#include <stdlib.h>
#include "main.h"
/**
 * count_word - a function that counts words in a string
 * @s: string
 *
 * Return: string
 */
int count_word(char *s)
{
int ind, ct, wr;
ind = 0;
wr = 0;
for (ct = 0; s[ct] != '\0'; ct++)
{
if (s[ct] == ' ')
ind = 0;
else if (ind == 0)
{
ind = 1;
wr++;
}
}
return (wr);
}
/**
 * **strtow - a program that splits a string into two words
 * @str: string to split
 *
 * Return: pointer to a string array (Success)
 * or null
 */
char **strtow(char *str)
{
char **matrix, *tmp;
int a, b = 0, ln = 0, words, ct = 0, start, end;
while (*(str + ln))
ln++;
words = count_word(str);
if (words == 0)
return (NULL);
matrix = (char **) malloc(sizeof(char *) * (words + 1));
if (matrix == NULL)
return (NULL);
for (a = 0; a <= ln; a++)
{
if (str[a] == ' ' || str[a] == '\0')
{
if (ct)
{
end = a;
tmp = (char *) malloc(sizeof(char) * (ct + 1));
if (tmp == NULL)
return (NULL);
while (start < end)
*tmp++ = str[start++];
*tmp = '\0';
matrix[k] = tmp - ct;
b++;
ct = 0;
}
}
else if (ct++ == 0)
start = a;
}
matrix[b] = NULL;
return (matrix);
}

