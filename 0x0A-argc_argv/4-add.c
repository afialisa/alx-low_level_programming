#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * str_to_int - a function that converts a string to an integer using atoi
 * @str: string input
 *
 * Return: the converted integer
 */
int str_to_int(const char *str)
{
return (atoi str);
}
/**
 * check_num - a program that checks if a string consists of digits
 * @str: string input
 *
 * Return: 1 if the string consists of digits, 0 otherwise
 */
int check_num(char *str)
{
unsigned int count = 0;
while (count < strlen(str))
{
if (!isdigit(str[count]))
{
return (0);
}
count++;
}
return (1);
}
/**
 * main - Entry point of the program
 * @argc: number of command line argument
 * @argv: array of command line argument strings
 *
 * Return: 0 if successful and 1 if otherwise
 */
int main(int argc, char *argv[])
{
int count;
int sum = 0;
for (count = 1; count < argc; count++)
{
if (check_num(argv[count]))
{
sum += str_to_int(argv[count]);
}
else
{
printf("Error\n");
return (1);
}
}
printf("%d\n", sum);
return (0);
}
