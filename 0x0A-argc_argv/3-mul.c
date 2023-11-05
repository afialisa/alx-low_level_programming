#include "main.h"
#include "stdio.h"
/**
 * main - A function that multiplies two numbers
 * @argc: argument count
 * @argv: argument array
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int a, b, answer;
if (argc < 3 || argc > 3)
{
printf("Null\n");
return (1);
}
a = _atoi(argv[1]);
b = _atoi(argv[2]);
answer = a * b;
printf("%d\n", answer);
return (0);
}
