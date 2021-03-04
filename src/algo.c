/*
** EPITECH PROJECT, 2017
** algo.c
** File description:
** algo
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "struct.h"

int init_algo(struct la **lista, struct lb **listb, int counter)
{
	(*lista)->ptr = *lista;
	(*lista)->value = *lista;
	(*lista)->new_value = *lista;
	(*lista)->new_value->valor = 2000000;
	(*lista)->checker = *lista;
	algo(lista, listb, counter);
	return (0);
}

int algo(struct la **lista, struct lb **listb, int counter)
{
	int index = 0;
	int counter2 = counter;

	while (counter != index) {
		reset_data(lista);
		while ((*lista)->ptr != NULL) {
			if ((*lista)->new_value->valor > (*lista)->value->x) {
				(*lista)->new_value = (*lista)->value;
				(*lista)->new_value->valor = (*lista)->value->x;
			}
			(*lista)->ptr = (*lista)->ptr->next;
			(*lista)->value = (*lista)->ptr;
		}
		if ((*lista)->ptr == NULL) {
			rotate_in_lista(lista);
			function_pb(lista, listb);
			my_putchar(' ');
		}
	index++;
	}
	past_in_la(lista, listb, counter2);
	return (0);
}

void rotate_in_lista(struct la **lista)
{
	int compteur = 0;
	int index = 0;

	while ((*lista)->checker != (*lista)->new_value) {
		(*lista)->checker = (*lista)->checker->next;
		compteur++;
	}
	while (compteur != index) {
		function_ra(lista);
		my_putchar(' ');
		compteur--;
	}
}

void reset_data(struct la **lista)
{
	(*lista)->ptr = *lista;
	(*lista)->value = *lista;
	(*lista)->new_value = *lista;
	(*lista)->new_value->valor = 2000000;
	(*lista)->checker = *lista;
}

void past_in_la(struct la **lista, struct lb **listb, int counter2)
{
	int index = 0;

	while (counter2 != index) {
		function_pa(lista, listb);
		counter2--;
		if (counter2 >= index +1) {
			my_putchar(' ');
		}
	}
	past_lista(lista);
	my_putchar('\n');
}
