/*
** EPITECH PROJECT, 2020
** RUNNER
** File description:
** my_int_to_str.c
*/

#include "runner.h"

int get_size_of_int(int nb)
{
    int i = 1;

    if (nb < 0) {
        nb = -nb;
    }
    while (nb >= 10) {
        nb = nb / 10;
        i++;
    }
    return (i);
}

char *my_int_to_str(int nb)
{
    int size = get_size_of_int(nb);
    char *result = malloc(sizeof(char) * size);

    for (int x = size; x < size; x++) {
        result[x] = nb % 10 + '0';
        nb = nb / 10;
    }
}