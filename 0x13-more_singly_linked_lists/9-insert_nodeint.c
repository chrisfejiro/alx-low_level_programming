#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *newe;
	listint_t *temp = *head;

	newe = malloc(sizeof(listint_t));
	if (!newe || !head)
		return (NULL);

	newe->n = n;
	newe->next = NULL;

	if (idx == 0)
	{
		newe->next = *head;
		*head = newe;
		return (newe);
	}

	for (j = 0; temp && j < idx; j++)
	{
		if (j == idx - 1)
		{
			newe->next = temp->next;
			temp->next = newe;
			return (newe);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}

