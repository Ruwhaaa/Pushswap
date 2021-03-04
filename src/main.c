/*
** EPITECH PROJECT, 2017
** main.c
** File description:
** main
*/

#include <stdlib.h>
#include "struct.h"

int main(int argc, char **argv)
{
	if (argc < 2) {
		return (84);
	}
	struct la *lista = NULL;
	struct lb *listb = NULL;

	copy_list(&lista, &listb, argc, argv);
	return (0);
}
