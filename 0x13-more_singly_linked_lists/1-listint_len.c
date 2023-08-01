#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked lists
 * by Achakpo Isioma
 *
 * @h: pointer to the head of a linked list
 *
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}

	return (n);
}
