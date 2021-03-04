/*
** EPITECH PROJECT, 2017
** function.c
** File description:
**
*/

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "struct.h"

void function_sa(struct la **lista)
{
	struct la *first = *lista;
	struct la *second = (*lista)->next;
	int i = 0;

	if  (first != NULL && second != NULL) {
		i = first->x;
		first->x = second->x;
		second->x = i;
		my_putstr("sa");
	}
}

void function_sb(struct lb **listb)
{
	struct lb *first = *listb;
	struct lb *second = (*listb)->next;
	int i = 0;

	if (first != NULL && second != NULL) {
		i = first->xb;
		first->xb = second->xb;
		second->xb = i;
		my_putstr("sb");
	}
}

void function_ra(struct la **lista)
{
	struct la *new = malloc(sizeof(*new));
	struct la *check = (*lista)->next;
	new->x = (*lista)->x;
	new->next = NULL;

	while ((*lista)->next != NULL) {
		(*lista) = (*lista)->next;
	}
	(*lista)->next = new;
	*lista = check;
	my_putstr("ra");
}

void function_rb(struct lb **listb)
{
	int tmp = (*listb)->xb;
	struct lb *new = malloc(sizeof(*new));
	struct lb *check = *listb;
	new->xb = tmp;
	new->next = NULL;
	check = check->next;

	while ((*listb)->next != NULL) {
		(*listb) = (*listb)->next;
	}
	(*listb)->next = new;
	*listb = check;
	my_putstr("rb");
}
