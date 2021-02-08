/*
** EPITECH PROJECT, 2020
** my_strcat.c
** File description:
** description
*/

#include <stddef.h>

int my_strlen(char const *str)
{
    int i;

    i = 0;
    while (str[i] != '\0') {
        i = i + 1;
    }
    return (i);
}

char *my_strcat(char *dest, char const *src)
{
    int va = my_strlen(dest);
    int vb = my_strlen(src);
    int w = 0;

    if (va == 0)
        return (NULL);
    if (vb == 0)
        return (dest);
    for (int x = 0; x <= vb; x++) {
        if (x >= vb) {
            while (x <= va + vb) {
                dest[x] = src[w];
                w = w + 1;
                x = x + 1;
            }
        }
    }
    return (dest);
}