/*
** EPITECH PROJECT, 2020
** RUNNER
** File description:
** moove_ddr.c
*/

#include "runner.h"

void moove_ddr(back_ground_t ***back)
{
    back_ground_t *temp = **back;

    if (temp->fond_fond->rectnl.width != 0) {
        temp->fond_fond->rectnl.left += 1;
        temp->fond_fond->rectnl.width -= 1;
        temp->fond_fond1->vector.x -= 1;
        temp->fond_fond1->rectnl.width += 1;
    } else {
        temp->fond_fond->rectnl.left = 0;
        temp->fond_fond->rectnl.width = 820;
        temp->fond_fond1->vector.x = 820;
        temp->fond_fond1->rectnl.width = 0;
    }
    sfSprite_setTextureRect(temp->fond_fond->sprite, temp->fond_fond->rectnl);
    sfSprite_setTextureRect(temp->fond_fond1->sprite, temp->fond_fond1->rectnl);
    sfSprite_setPosition(temp->fond_fond1->sprite, temp->fond_fond1->vector);
    **back = temp;
}