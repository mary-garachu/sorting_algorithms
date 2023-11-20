#include "sort.h"
/**
 * insertion_sort_list - sorts elements using insertion sort
 * @list: pointer to pointer of the head element
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current = NULL;
	listint_t *temp = NULL;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;
	while (current != NULL)
	{
		temp = current->prev;
		while (temp != NULL && temp->n > current->n)
		{
			if (temp->prev != NULL)
				temp->prev->next = current;
			if (current->next != NULL)
				current->next->prev = temp;
			temp->next = current->next;
			current->prev = temp->prev;

			current->next = temp;
			temp->prev = current;
			if (current->prev == NULL)
				*list = current;
			print_list(*list);
			temp = current->prev;
		}
		current = current->next;
	}
}
