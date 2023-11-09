#include <stdio.h>
#include <stdlib.h>
/**
 * main - a function that prints its opcodes
 * @argc: rguments counts
 * @argv: array
 *
 * Return: 0 Always (Success)
 */
int main(int argc, char *argv[])
{
int bytes, a;
char *arr;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
bytes = atoi(argv[1]);
if (bytes < 0)
{
printf("Error\n");
exit(2);
}
arr = (char *)main;
for (a = 0; a < bytes; a++)
{
if (a == bytes - 1)
{
printf("%02hhx\n", arr[a]);
break; }
printf("%02hhx ", arr[a]);
}
return (0);
}
