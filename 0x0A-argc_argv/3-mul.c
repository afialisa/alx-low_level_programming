#include "main.h"
#include "stdio.h"
/**
 * _atoi - A function that converts a string to an integer
 * @s: converted string
 *
 * Return: The converted integer
 */
int _atoi(char *s)
{
int a, b, c, len, d, digit;
a = 0;
b = 0;
c = 0;
len = 0;
d = 0;
digit = 0;
while (s[len] != '\0')
len++;
while (a < len && d == 0)
{
if (s[a] == '-')
++b;
if (s[a] >= '0' && s[a] <= '9')
{
digit = s[a] - '0';
if (b % 2)
digit = -digit;
c = c * 10 + digit;
d = 1;
if (s[a + 1] < '0' || s[a + 1] > '9')
break;
d = 0;
}
a++;
}
if (d == 0)
return (0);
return (c);
}
/**
 * main - A function that multiplies two numbers
 * @argc: argument count
 * @argv: argument array
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int answer, a, b;
if (argc < 3 || argc > 3)
{
printf("Error\n");
return (1);
}
a = _atoi(argv[1]);
b = _atoi(argv[2]);
answer = a * b;
printf("%d\n", answer);
return (0);
}
