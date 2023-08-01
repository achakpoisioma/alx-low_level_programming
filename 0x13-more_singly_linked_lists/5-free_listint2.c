#include "lists.h"

/**
 * free_listint2 - function that frees a linked list
 * by Achakpo Isioma
 *
 * @head: pointer to the head of listint_t list
 */
void free_listint2(listint_t **head)
{
	listint_t *tempvariable;

	if (head == NULL)
		return;

	while (*head)
	{
		tempvariable = (*head)->next;
		free(*head);
		*head = tempvariable;
	}

	*head = NULL;
}
