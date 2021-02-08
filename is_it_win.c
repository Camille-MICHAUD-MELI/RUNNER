/*
** EPITECH PROJECT, 2020
** RUNNER
** File description:
** is_it_win.c
*/

#include "runner.h"

void is_it_win(sfRenderWindow ***window, back_ground_t ***m,
map_object_t ***o)
{
    back_ground_t *map = **m;
    map_object_t *ob = **o;

    if (ob->obstacle_8->frect.left < -100)
        map->player->nb = 4;
    **m = map;
    **o = ob;
}