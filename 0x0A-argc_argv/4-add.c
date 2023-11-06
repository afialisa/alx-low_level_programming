#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"
/**
 * check_num - checks the number of strings in a digit
 * @str: array str
 *
 * Return: Always 0 (Success)
 */
int check_num(char *str)
{
/*Declaring variables*/
unsigned int count;
count = 0;
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
 * main - A function that prints the program name
 * @argc: counts argument
 * @argv: arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
/*Declaring variables*/
int count;
int str_to_int;
int sum;
count = 1;
while (count < argc)
{
if (check_num(argv[count]))
{
str_to_int(argv[count]);
sum = str_to_int + sum;
}
/*if one of the numbers contains symbols that are not digits*/
else
{
printf("Error\n");
return (1);
}
count++;
}
printf("%d\n", sum);
return (0);
}
