#include "lists.h"

/**
 * sum_listint - function that calculates the sum of
 *		 all the data in a listint_t list
 * by Achakpo Isioma
 * @head: pointer to the head of the linked list
 *
 * Return: sum of all the data (n) of a linked list, or 0 if list the is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
