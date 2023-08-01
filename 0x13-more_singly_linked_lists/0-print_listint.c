#include "lists.h"

/**
 * print_listint - function that prints all the elements of a linked list
 * by Achakp Isioma
 *
 * @h: linked list of type listint_t to print
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (n);
}
