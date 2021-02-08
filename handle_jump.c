/*
** EPITECH PROJECT, 2020
** RUNNER
** File description:
** handle_jump.c
*/

#include "runner.h"

void handle_jump(back_ground_t ***bak)
{
    back_ground_t *ba = **bak;

    if (ba->player->vector.y <= 200 || ba->player->nb == 2) {
        ba->player->nb = 2;
        if (ba->player->nb == 2) {
            ba->player->vector.y += 7;
            sfSprite_setPosition(ba->player->sprite, ba->player->vector);
        }
        if (ba->player->vector.y >= 360) {
            ba->player->nb = 0;
            ba->player->jump = 0;
        }
    }
    if (ba->player->vector.y >= 200 && ba->player->nb != 2) {
        ba->player->vector.y = ba->player->vector.y - 10;
        sfSprite_setTextureRect(ba->player->sprite, ba->player->rectnl);
        sfSprite_setPosition(ba->player->sprite, ba->player->vector);
    }
    **bak = ba;
}