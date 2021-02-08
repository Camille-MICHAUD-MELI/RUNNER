/*
** EPITECH PROJECT, 2020
** RUNNER
** File description:
** does_it_touch.c
*/

#include "runner.h"

void does_it_touchbis1(sfRenderWindow ***window, back_ground_t ***m,
map_object_t ***o)
{
    back_ground_t *map = **m;
    map_object_t *ob = **o;

    ob->obstacle_3->frect = sfSprite_getGlobalBounds(ob->obstacle_3->sprite);
    ob->obstacle_4->frect = sfSprite_getGlobalBounds(ob->obstacle_4->sprite);
    if (ob->obstacle_3->frect.left < map->player->frect.left +
    map->player->frect.width && ob->obstacle_3->frect.left > map->player
    ->frect.left)
        if (ob->obstacle_3->frect.top < map->player->frect.top +
        map->player->frect.height && ob->obstacle_3->frect.top +
        ob->obstacle_3->frect.height > map->player->frect.top)
            map->stop = 0;
    if (ob->obstacle_4->frect.left < map->player->frect.left +
    map->player->frect.width && ob->obstacle_4->frect.left > map->player
    ->frect.left)
        if (ob->obstacle_4->frect.top < map->player->frect.top +
        map->player->frect.height && ob->obstacle_4->frect.top +
        ob->obstacle_4->frect.height > map->player->frect.top)
            map->stop = 0;
    **m = map;
    **o = ob;
}

void does_it_touchbis(sfRenderWindow ***window, back_ground_t ***m,
map_object_t ***o)
{
    back_ground_t *map = **m;
    map_object_t *ob = **o;

    ob->obstacle_1->frect = sfSprite_getGlobalBounds(ob->obstacle_1->sprite);
    ob->obstacle_2->frect = sfSprite_getGlobalBounds(ob->obstacle_2->sprite);
    if (ob->obstacle_1->frect.left < map->player->frect.left +
    map->player->frect.width && ob->obstacle_1->frect.left > map->player
    ->frect.left)
        if (ob->obstacle_1->frect.top < map->player->frect.top +
        map->player->frect.height && ob->obstacle_1->frect.top +
        ob->obstacle_1->frect.height > map->player->frect.top)
            map->stop = 0;
    if (ob->obstacle_2->frect.left < map->player->frect.left +
    map->player->frect.width && ob->obstacle_2->frect.left > map->player
    ->frect.left)
        if (ob->obstacle_2->frect.top < map->player->frect.top +
        map->player->frect.height && ob->obstacle_2->frect.top +
        ob->obstacle_2->frect.height > map->player->frect.top)
            map->stop = 0;
    **m = map;
    **o = ob;
}

void does_it_touchbis2(sfRenderWindow ***window, back_ground_t ***m,
map_object_t ***o)
{
    back_ground_t *map = **m;
    map_object_t *ob = **o;

    ob->obstacle_5->frect = sfSprite_getGlobalBounds(ob->obstacle_5->sprite);
    ob->obstacle_6->frect = sfSprite_getGlobalBounds(ob->obstacle_6->sprite);
    if (ob->obstacle_5->frect.left < map->player->frect.left +
    map->player->frect.width && ob->obstacle_5->frect.left > map->player
    ->frect.left)
        if (ob->obstacle_5->frect.top < map->player->frect.top +
        map->player->frect.height && ob->obstacle_5->frect.top +
        ob->obstacle_5->frect.height > map->player->frect.top)
            map->stop = 0;
    if (ob->obstacle_6->frect.left < map->player->frect.left +
    map->player->frect.width && ob->obstacle_6->frect.left > map->player
    ->frect.left)
        if (ob->obstacle_6->frect.top < map->player->frect.top +
        map->player->frect.height && ob->obstacle_6->frect.top +
        ob->obstacle_6->frect.height > map->player->frect.top)
            map->stop = 0;
    **m = map;
    **o = ob;
}

void does_it_touchbis3(sfRenderWindow ***window, back_ground_t ***m,
map_object_t ***o)
{
    back_ground_t *map = **m;
    map_object_t *ob = **o;

    ob->obstacle_7->frect = sfSprite_getGlobalBounds(ob->obstacle_7->sprite);
    ob->obstacle_8->frect = sfSprite_getGlobalBounds(ob->obstacle_8->sprite);
    if (ob->obstacle_7->frect.left < map->player->frect.left +
    map->player->frect.width && ob->obstacle_7->frect.left > map->player
    ->frect.left)
        if (ob->obstacle_7->frect.top < map->player->frect.top +
        map->player->frect.height && ob->obstacle_7->frect.top +
        ob->obstacle_7->frect.height > map->player->frect.top)
            map->stop = 0;
    if (ob->obstacle_8->frect.left < map->player->frect.left +
    map->player->frect.width && ob->obstacle_8->frect.left > map->player
    ->frect.left)
        if (ob->obstacle_8->frect.top < map->player->frect.top +
        map->player->frect.height && ob->obstacle_8->frect.top +
        ob->obstacle_8->frect.height > map->player->frect.top)
            map->stop = 0;
    **m = map;
    **o = ob;
}

void does_it_touch(sfRenderWindow **window, back_ground_t **m,
map_object_t **o)
{
    sfFloatRect *pos = malloc(sizeof(sfFloatRect) * 8);
    back_ground_t *map = *m;
    map_object_t *ob = *o;

    map->player->frect = sfSprite_getGlobalBounds(map->player->sprite);
    map->player->frect.left += 50;
    map->player->frect.top += 4;
    map->player->frect.width = 30;
    map->player->frect.height = 72;
    does_it_touchbis(&window, &m, &o);
    does_it_touchbis1(&window, &m, &o);
    does_it_touchbis2(&window, &m, &o);
    does_it_touchbis3(&window, &m, &o);
    is_it_win(&window, &m, &o);
    *m = map;
    *o = ob;
}