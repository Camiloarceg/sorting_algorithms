#include "sort.h"

/**
 * swap_node- swaps nodes.
 *
 * @head: the head of the list.
 * @node_1:left node.
 * @node_2:right node.
 *
 */
void swap_node(listint_t **head, listint_t *node_1, listint_t *node_2)
{
	if (node_1->prev == NULL && node_2->next == NULL)
	{
		node_2->prev = NULL;
		node_2->next = node_1;
		node_1->next = NULL;
		node_1->prev = node_2;
		*head = node_2;
	}
	else if (node_1->prev == NULL)
	{
		node_2->prev = NULL;
		node_2->next->prev = node_1;
		node_1->next = node_2->next;
		node_2->next = node_1;
		*head = node_2;
		node_1->prev = node_2;
	}
	else if (node_2->next == NULL)
	{
		node_2->prev = node_1->prev;
		node_1->prev->next = node_2;
		node_1->prev = node_2;
		node_1->next = NULL;
		node_2->next = node_1;
	}
	else
	{
		node_2->prev = node_1->prev;
		node_1->prev->next = node_2;
		node_1->prev = node_2;
		node_2->next->prev = node_1;
		node_1->next = node_2->next;
		node_2->next = node_1;
	}
}

/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void print_list(const listint_t *list)
{
	int i;

	i = 0;
	while (list)
	{
		if (i > 0)
			printf(", ");
		printf("%d", list->n);
		++i;
		list = list->next;
	}
	printf("\n");
}
