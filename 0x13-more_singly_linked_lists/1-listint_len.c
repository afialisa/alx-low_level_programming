#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * listint_len - a program that returns the linked in elements
 * @h: traversing linked list
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
size_t node1 = 0;
while (h)
{
node1++;
h = h->next;
}
return (node1);
}
