#include "sort.h"

/**
 * swap_nodes - Swaps two adjacent nodes
 * @list: Double pointer to head of list
 * @node1: First node to swap
 * @node2: Second node to swap
 */

void swap_nodes(listint_t **list, listint_t *node1, listint_t *node2)
{
	if (node1->prev)
	{
		node1->prev->next = node2;
	}
	if (node2->next)
	{
		node2->next->prev = node1;
	}

	node1->next = node2->next;
	node2->prev = node1->prev;

	node1->prev = node2;
	node2->next = node1;

	if (node2->prev == NULL)
	{
		*list = node2;
	}

	/**
	 * insertion_sort_list - Sorts double linked list using insertion sort
	 * @list: Double pointer at head of list
	 */

	void insertion_sort_list(listint_t * *list)
	{
		listint_t *current, *prev;

		if (list == NULL || *list == NULL || (*list)->next == NULL)
		{
			return;
		}

		current = (*list)->next;
		while (current != NULL)
		{
			prev = current->prev;
			while (prev != NULL && current->n < prev->n)
			{
				swap_nodes(list, prev, current);
				print_list(*list);
				prev = current->prev;
			}
			current = current->next;
		}
	}
}