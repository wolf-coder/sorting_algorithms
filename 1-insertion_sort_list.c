#include <stdio.h>
#include "sort.h"
#include <stdlib.h>

/**
 *insertion_sort_list- Function that sorts a doubly linked list of integers
 *in ascending order using the Insertion sort algorithm.
 *
 *
 *@list: The head of the doubly linked list.
 *
 *Return: Void.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *Element = NULL, *P = NULL, *N = NULL, *Tmp = NULL;
	listint_t *h = *list;
	size_t n = 0;

	if (list == NULL || *list == NULL)
		return;
	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	if (n >= 2)
	{
		Element = (*list)->next;
		while (Element)
		{
			P = Element->prev;
			N = P->next;
			while (P && P->n > Element->n)
			{
				Tmp = N->next;
				N->next = P;
				P->next = Tmp;
				Tmp = P->prev;
				P->prev = N;
				N->prev = Tmp;
				if (!N->prev)
					(*list) = N;
				else
					N->prev->next = N;
				if (P->next)
					P->next->prev = P;
				print_list(*list);
				P = N->prev;
				if (P)
					N = P->next;
			}
			Element = Element->next;
		}
	}
}
