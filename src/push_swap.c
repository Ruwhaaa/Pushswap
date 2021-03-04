/*
** EPITECH PROJECT, 2017
** push_swap.c
** File description:
** push_swap
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "struct.h"

int copy_list(struct la **lista, struct lb **listb, int argc, char **argv)
{
	struct la *number = NULL;
	int i = argc - 1;
	int counter = i;

	while (0 < i) {
		number = malloc(sizeof(*number));
		number->x = my_getnbr(argv[i]);
		--i;
		number->next = *lista;
		*lista = number;
	}
	already_sort(lista, listb, counter);
	return (0);
}

int already_sort(struct la **lista, struct lb **listb, int counter)
{
	int index_inf = 0;
	struct la *sorted = *lista;

	while (sorted->next != NULL) {
		if (sorted->x < sorted->next->x) {
			index_inf = index_inf + 1;
		}
		if (sorted->x > sorted->next->x) {
			index_inf = 0;
		}
		sorted = sorted->next;
	}
	end_path(lista, listb, counter, index_inf);
	return (0);
}

int end_path(struct la **lista, struct lb **listb, int counter, int index_inf)
{
	if (index_inf == counter - 1) {
		my_putchar('\n');
		return (0);
	} else {
		init_algo(lista, listb, counter);
	}
	return (0);
}

void past_lista(struct la **lista)
{
	struct la *head = *lista;

	while (head != NULL) {
		my_put_nbr(head->x);
		head = head->next;
	}
}

void past_listb(struct lb **listb)
{
	struct lb *head2 = *listb;

	while (head2 != NULL) {
		my_put_nbr(head2->xb);
		head2 = head2->next;
	}
}
