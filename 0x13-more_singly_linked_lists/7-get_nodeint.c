#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a linked list
 * by Achakpoi Isioma
 *
 * @head: pointer to the head of a linked list
 * @index: index of the node, starting at 0
 *
 * Return: returns the nth node or NULL if node is does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tempvar = head;

	while (tempvar && i < index)
	{
		tempvar = tempvar->next;
		i++;
	}

	return (tempvar ? tempvar : NULL);
}
