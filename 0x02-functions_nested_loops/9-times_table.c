#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
int a, b, answer;

for (a = 0; a <= 9; a++)
{
for (b = 0; b <= 9; b++)
{
answer = a * b;

if (b == 0)
_putchar('0');
else
_putchar(' ');

if (answer < 10 && b > 0)
_putchar(' ');

if (answer >= 10)
_putchar((answer / 10) + '0');

_putchar((answer % 10) + '0');

if (b < 9)
{
_putchar(',');
_putchar(' ');
			}
}
_putchar('\n');
}
}
