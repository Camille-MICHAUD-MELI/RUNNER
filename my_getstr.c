/*
** EPITECH PROJECT, 2020
** my_getstr
** File description:
** get str
*/

#include <stdlib.h>
#include <stdio.h>

int my_strlen(char const *str);

char *my_revstr(char *str);

char *my_intto_str(int nb)
{
    int i;
    int x;
    int j = 0;
    char *result = malloc(sizeof(char) * 10);

    if (nb < 0) {
        result[j] = '-';
        j++;
    } else {
        while (nb > 0) {
            x = nb % 10;
            i = nb / 10;
            result[j] = x + 48;
            nb = i;
            j++;
        }
    }
    result[j] = '\0';
    return (my_revstr(result));
}