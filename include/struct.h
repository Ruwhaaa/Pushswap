/*
** EPITECH PROJECT, 2017
** read_size.h
** File description:
** reader
*/

#ifndef READ_SIZE_
#define READ_SIZE

int copy_list(struct la **lista, struct lb **listb, int argc ,char **argv);
int main(int argc, char **argv);
int my_putstr(char const *str);
void my_putchar(char c);
void past_lista(struct la **lista);
void past_listb(struct lb **listb);
void display_nbr(int n, int b, int nb);
int my_getnbr(char const *str);
int my_put_nbr(int nb);
char *my_revstr(char *str);
void number(int nb, char *str);

#endif /* !READ_SIZE */
