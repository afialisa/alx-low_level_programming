#include "lists.h"
#include <stdio.h>
/**
 * print_listint - a program that prints all linked list element
 * @h: linked list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t node1 = 0;
while (h)
{
printf("%d\n", h->n);
node1++;
h = h->next;
}
return (node1);
}

