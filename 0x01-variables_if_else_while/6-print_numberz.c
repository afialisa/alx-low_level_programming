#include <stdio.h>

/**
 * main - A program that prints all single digit numbers
 *
 * Return: 0 always
 */

int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		putchar(i + '0');
	}
	putchar(' ');
	return (0);
}
