/*
** EPITECH PROJECT, 2020
** RUNNER
** File description:
** moove_rect.c
*/

#include "runner.h"

void moove_rect(sfIntRect *rectt, int offset, int max_value)
{
    sfIntRect *rect = rectt;

    rect->left = rect->left + offset;
    if (rect->left == max_value)
        rect->left = 0;
}