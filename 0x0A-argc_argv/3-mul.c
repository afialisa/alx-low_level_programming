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
int a, b, c, ln, d, digit;
a = 0;
b = 0;
c = 0;
ln = 0;
d = 0;
digit = 0;
while (s[ln] != '\0')
len++;
while (a < ln && d == 0)
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
int answer, num1, num2;
if (argc < 3 || argc > 3)
{
printf("Error\n");
return (1);
}
num1 = _atoi(argv[1]);
num2 = _atoi(argv[2]);
answer = num1 * num2;
printf("%d\n", answer);
return (0);
}
