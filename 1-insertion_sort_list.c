#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers
 *						  in ascending order
 *
 * @list: the doubly linked list.
 *
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *tmp1 = (*list), *tmp2 = (*list);

	while (tmp1->next != NULL)
	{
		if (tmp1->n > tmp1->next->n)
		{
			swap_node(list, tmp1, tmp1->next);
			print_list(*list);
			tmp2 = tmp1->prev;
		while (tmp2->prev != NULL)
		{
		if (tmp2->n < tmp2->prev->n)
		{
			swap_node(list, tmp2->prev, tmp2);
			print_list(*list);
		}
		else
			tmp2 = tmp2->prev;
		}
		}
	else
		tmp1 = tmp1->next;
	}
}
