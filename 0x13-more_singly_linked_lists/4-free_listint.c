#include "lists.h"

/**
 * free_listint - function that frees a linked list
 * by Achakpo Isioma
 *
 * @head: pointer to the listint_t list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		head = temp;
		free(head);
	}
}
