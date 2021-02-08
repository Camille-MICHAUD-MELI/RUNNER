/*
** EPITECH PROJECT, 2020
** RUNNER
** File description:
** create_obstacle1.c
*/

#include "runner.h"

map_object_t *map_create3bis(map_object_t *map)
{
    sfIntRect rect6 = {0, 0, 75, 74};
    sfIntRect rect7 = {0, 0, 75, 74};
    sfIntRect rect8 = {0, 0, 75, 74};
    sfVector2f pos6 = {1810, 360};
    sfVector2f pos7 = {2490, 360};
    sfVector2f pos8 = {2700, 360};

    map->obstacle_6 = create_object("spikes_1.png", pos6, rect6);
    map->obstacle_7 = create_object("spikes_1.png", pos7, rect7);
    map->obstacle_8 = create_object("spikes_1.png", pos8, rect8);
    return (map);
}

map_object_t *map_create3(void)
{
    map_object_t *map = malloc(sizeof(map_object_t));
    sfIntRect rect1 = {0, 0, 75, 74};
    sfIntRect rect2 = {0, 0, 75, 74};
    sfIntRect rect3 = {0, 0, 75, 74};
    sfIntRect rect4 = {0, 0, 75, 74};
    sfIntRect rect5 = {0, 0, 75, 74};
    sfVector2f pos1 = {830, 360};
    sfVector2f pos2 = {905, 360};
    sfVector2f pos3 = {980, 360};
    sfVector2f pos4 = {1660, 360};
    sfVector2f pos5 = {1735, 360};

    map->obstacle_1 = create_object("spikes_1.png", pos1, rect1);
    map->obstacle_2 = create_object("spikes_1.png", pos2, rect2);
    map->obstacle_3 = create_object("spikes_1.png", pos3, rect3);
    map->obstacle_4 = create_object("spikes_1.png", pos4, rect4);
    map->obstacle_5 = create_object("spikes_1.png", pos5, rect5);
    map = map_create3bis(map);
    return (map);
}

map_object_t *map_create4bis(map_object_t *map)
{
    sfIntRect rect6 = {0, 0, 75, 74};
    sfIntRect rect7 = {0, 0, 75, 74};
    sfIntRect rect8 = {0, 0, 75, 74};
    sfVector2f pos6 = {1880, 360};
    sfVector2f pos7 = {2580, 360};
    sfVector2f pos8 = {3280, 360};

    map->obstacle_6 = create_object("wood.png", pos6, rect6);
    map->obstacle_7 = create_object("wood.png", pos7, rect7);
    map->obstacle_8 = create_object("wood.png", pos8, rect8);
    return (map);
}

map_object_t *map_create4(void)
{
    map_object_t *map = malloc(sizeof(map_object_t));
    sfIntRect rect1 = {0, 0, 75, 74};
    sfIntRect rect2 = {0, 0, 75, 74};
    sfIntRect rect3 = {0, 0, 75, 74};
    sfIntRect rect4 = {0, 0, 75, 74};
    sfIntRect rect5 = {0, 0, 75, 74};
    sfVector2f pos1 = {830, 220};
    sfVector2f pos2 = {1530, 220};
    sfVector2f pos3 = {2230, 220};
    sfVector2f pos4 = {2930, 220};
    sfVector2f pos5 = {1180, 360};

    map->obstacle_1 = create_object("dblade.png", pos1, rect1);
    map->obstacle_2 = create_object("dblade.png", pos2, rect2);
    map->obstacle_3 = create_object("dblade.png", pos3, rect3);
    map->obstacle_4 = create_object("dblade.png", pos4, rect4);
    map->obstacle_5 = create_object("wood.png", pos5, rect5);
    map = map_create4bis(map);
    return (map);
}