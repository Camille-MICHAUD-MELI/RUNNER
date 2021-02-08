/*
** EPITECH PROJECT, 2020
** RUNNER
** File description:
** display_windows.c
*/

#include "runner.h"

void display_obstacle(sfRenderWindow ***window, map_object_t ***ma)
{
    map_object_t *map = **ma;

    sfRenderWindow_drawSprite(**window, map->obstacle_1->sprite, NULL);
    sfRenderWindow_drawSprite(**window, map->obstacle_2->sprite, NULL);
    sfRenderWindow_drawSprite(**window, map->obstacle_3->sprite, NULL);
    sfRenderWindow_drawSprite(**window, map->obstacle_4->sprite, NULL);
    sfRenderWindow_drawSprite(**window, map->obstacle_5->sprite, NULL);
    sfRenderWindow_drawSprite(**window, map->obstacle_6->sprite, NULL);
    sfRenderWindow_drawSprite(**window, map->obstacle_7->sprite, NULL);
    sfRenderWindow_drawSprite(**window, map->obstacle_8->sprite, NULL);
}

void display_player(sfRenderWindow ***window, back_ground_t ***back)
{
    back_ground_t *bc = **back;

    sfRenderWindow_drawSprite(**window, bc->shadow->sprite, NULL);
    sfRenderWindow_drawSprite(**window, bc->player->sprite, NULL);
    sfSprite_setTextureRect(bc->player->sprite, bc->player->rectnl);
}

void display_back(sfRenderWindow ***window, back_ground_t ***back)
{
    back_ground_t *bc = **back;

    sfRenderWindow_drawSprite(**window, bc->fond_fond->sprite, NULL);
    sfRenderWindow_drawSprite(**window, bc->fond_fond1->sprite, NULL);
    sfRenderWindow_drawSprite(**window, bc->fond1->sprite, NULL);
    sfRenderWindow_drawSprite(**window, bc->fond->sprite, NULL);
    sfRenderWindow_drawSprite(**window, bc->avant->sprite, NULL);
    sfRenderWindow_drawSprite(**window, bc->avant1->sprite, NULL);
}

void display_windows(sfRenderWindow **window, back_ground_t **b, map_object_t
**mapp, sfMusic **music)
{
    back_ground_t *bc = *b;
    sfIntRect temp = bc->player->rectnl;
    map_object_t *map = *mapp;

    if (bc->stop == 1) {
        display_back(&window, &b);
        display_player(&window, &b);
        display_obstacle(&window, &mapp);
        display_text(&b, &window);
        sfRenderWindow_display(*window);
        sfRenderWindow_clear(*window, sfRed);
    }
    if (bc->stop == 3)
        win(&window, &b, &mapp, &music);
    else if (bc->stop == 0) {
        sfRenderWindow_drawSprite(*window, bc->loose->sprite, NULL);
        death_sound(&b, &window);
        sfRenderWindow_display(*window);
        sfRenderWindow_clear(*window, sfRed);
        sfMusic_pause(*music);
    }
}

void win(sfRenderWindow ***window, back_ground_t ***b, map_object_t ***mapp,
sfMusic ***music)
{
    back_ground_t *bc = **b;
    sfIntRect temp = bc->player->rectnl;
    map_object_t *map = **mapp;

    sfRenderWindow_drawSprite(**window, bc->win->sprite, NULL);
    sfRenderWindow_drawSprite(**window, bc->medals->sprite, NULL);
    sfRenderWindow_drawSprite(**window, bc->shadow->sprite, NULL);
    sfRenderWindow_display(**window);
    sfRenderWindow_clear(**window, sfRed);
    sfMusic_pause(**music);
}