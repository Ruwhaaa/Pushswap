/*
** EPITECH PROJECT, 2017
** function2.c
** File description:
**
*/

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "struct.h"

int function_rr(struct la **lista, struct lb **listb)
{
	int tmp = (*lista)->x;
	struct la *new = malloc(sizeof(*new));
	struct la *check = *lista;
	new->x = tmp;
	new->next = NULL;
	check = check->next;

	while ((*lista)->next != NULL) {
		(*lista) = (*lista)->next;
	}
	(*lista)->next = new;
	*lista = check;
	function_rr2(listb);
	return (0);
}

void function_rr2(struct lb **listb)
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
	my_putstr("rr");
}

void function_pb(struct la **lista, struct lb **listb)
{
		struct lb *pb = malloc(sizeof(*pb));
		pb->xb = (*lista)->x;
		*lista = (*lista)->next;
		pb->next = *listb;
		*listb = pb;
		my_putstr("pb");
}

void function_pa(struct la **lista, struct lb **listb)
{
		struct la *pa = malloc(sizeof(*pa));
		pa->x = (*listb)->xb;
		*listb = (*listb)->next;
		pa->next = *lista;
		*lista = pa;
		my_putstr("pa");
}
