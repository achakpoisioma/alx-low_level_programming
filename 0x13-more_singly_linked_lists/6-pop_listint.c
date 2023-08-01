#include "lists.h"

/**
 * pop_listint - fuction that deletes the head node of a linked list
 *		 and returns the head node's data (n)
 * by Achakpo Isioma
 *
 * @head: pointer to the head in the linked list
 *
 * Return: head node's data (n), or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tempvariable;
	int n;

	if (!head || !*head)
		return (0);

	n = (*head)->n;
	tempvariable = (*head)->next;
	free(*head);
	*head = tempvariable;

	return (n);
}
