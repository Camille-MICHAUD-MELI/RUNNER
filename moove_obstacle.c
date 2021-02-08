/*
** EPITECH PROJECT, 2020
** RUNNER
** File description:
** moove_obstacle.c
*/

#include "runner.h"

void moove_obstacle(map_object_t ***ot)
{
    map_object_t *o = **ot;

    o->obstacle_1->vector.x = o->obstacle_1->vector.x - 10;
    sfSprite_setTextureRect(o->obstacle_1->sprite, o->obstacle_1->rectnl);
    sfSprite_setPosition(o->obstacle_1->sprite, o->obstacle_1->vector);
    o->obstacle_2->vector.x = o->obstacle_2->vector.x - 10;
    sfSprite_setTextureRect(o->obstacle_2->sprite, o->obstacle_2->rectnl);
    sfSprite_setPosition(o->obstacle_2->sprite, o->obstacle_2->vector);
    o->obstacle_3->vector.x = o->obstacle_3->vector.x - 10;
    sfSprite_setTextureRect(o->obstacle_3->sprite, o->obstacle_3->rectnl);
    sfSprite_setPosition(o->obstacle_3->sprite, o->obstacle_3->vector);
    o->obstacle_4->vector.x = o->obstacle_4->vector.x - 10;
    sfSprite_setTextureRect(o->obstacle_4->sprite, o->obstacle_4->rectnl);
    sfSprite_setPosition(o->obstacle_4->sprite, o->obstacle_4->vector);
    o->obstacle_5->vector.x = o->obstacle_5->vector.x - 10;
    sfSprite_setTextureRect(o->obstacle_5->sprite, o->obstacle_5->rectnl);
    sfSprite_setPosition(o->obstacle_5->sprite, o->obstacle_5->vector);
    moove_obstaclebis(&ot);
    **ot = o;
}

void moove_obstaclebis(map_object_t ****ot)
{
    map_object_t *o = ***ot;

    o->obstacle_6->vector.x = o->obstacle_6->vector.x - 10;
    sfSprite_setTextureRect(o->obstacle_6->sprite, o->obstacle_6->rectnl);
    sfSprite_setPosition(o->obstacle_6->sprite, o->obstacle_6->vector);
    o->obstacle_7->vector.x = o->obstacle_7->vector.x - 10;
    sfSprite_setTextureRect(o->obstacle_7->sprite, o->obstacle_7->rectnl);
    sfSprite_setPosition(o->obstacle_7->sprite, o->obstacle_7->vector);
    o->obstacle_8->vector.x = o->obstacle_8->vector.x - 10;
    sfSprite_setTextureRect(o->obstacle_8->sprite, o->obstacle_8->rectnl);
    sfSprite_setPosition(o->obstacle_8->sprite, o->obstacle_8->vector);
    ***ot = o;
}