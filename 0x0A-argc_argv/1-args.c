#include "main.h"
#include "stdio.h"
/**
 * main - A function that prints the number of arguments passed
 * @argc: argument counts
 * @argv: argument array
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
printf("%d\n", argc - 1);
return (0);
}
