/*
** EPITECH PROJECT, 2020
** RUNNER
** File description:
** moove_pos.c
*/

#include "runner.h"

void moove_pos(back_ground_t ***back, sfRenderWindow ***window)
{
    back_ground_t *bak = **back;

    bak->player->vector.y = 350;
    bak->player->vector.x += 10;
    bak->shadow->vector.x += 10;
    sfSprite_setPosition(bak->shadow->sprite, bak->shadow->vector);
    sfSprite_setPosition(bak->player->sprite, bak->player->vector);
    if (bak->player->vector.x >= 870)
        bak->stop = 3;
    **back = bak;
}