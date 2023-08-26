#include "lists.h"

/**
* list_len - Returns the number of elements in a linked list_t list.
* @h: Pointer to the head of the list.
* Return: The number of elements in the list.
*/
int list_len(const list_t *h)
{
int count = 0;

while (h != NULL)
{
count++;
h = h->next;
}

return (count);
}

