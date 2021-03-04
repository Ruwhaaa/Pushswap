##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile c file
##

SRCC = ./src/

SRC	=	$(SRCC)main.c  \
		$(SRCC)push_swap.c	\
		$(SRCC)function.c	\
		$(SRCC)function2.c	\
		$(SRCC)algo.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-W -Wall -Wextra -Iinclude

LDFLAGS	=	-lm -Llib/my/ -lmy

NAME	=	push_swap

$(NAME):	 $(OBJ)
	make -C lib/my
	gcc -o $(NAME) $(OBJ) $(LDFLAGS)

all:	$(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all
