/*
** EPITECH PROJECT, 2020
** RUNNER
** File description:
** create_obstacle.c
*/

#include "runner.h"

map_object_t *map_create1bis(map_object_t *map)
{
    sfIntRect rect6 = {0, 0, 75, 74};
    sfIntRect rect7 = {0, 0, 75, 74};
    sfIntRect rect8 = {0, 0, 75, 74};
    sfVector2f pos6 = {4980, 360};
    sfVector2f pos7 = {4980, 360};
    sfVector2f pos8 = {4980, 360};

    map->obstacle_6 = create_object("blade_2.png", pos6, rect6);
    map->obstacle_7 = create_object("blade_2.png", pos7, rect7);
    map->obstacle_8 = create_object("blade_2.png", pos8, rect8);
    return (map);
}

map_object_t *map_create1(void)
{
    map_object_t *map = malloc(sizeof(map_object_t));
    sfIntRect rect1 = {0, 0, 75, 74};
    sfIntRect rect2 = {0, 0, 75, 74};
    sfIntRect rect3 = {0, 0, 75, 74};
    sfIntRect rect4 = {0, 0, 75, 74};
    sfIntRect rect5 = {0, 0, 75, 74};
    sfVector2f pos1 = {830, 360};
    sfVector2f pos2 = {1660, 360};
    sfVector2f pos3 = {2490, 360};
    sfVector2f pos4 = {3320, 360};
    sfVector2f pos5 = {4150, 360};

    map->obstacle_1 = create_object("blade_2.png", pos1, rect1);
    map->obstacle_2 = create_object("blade_2.png", pos2, rect2);
    map->obstacle_3 = create_object("blade_2.png", pos3, rect3);
    map->obstacle_4 = create_object("blade_2.png", pos4, rect4);
    map->obstacle_5 = create_object("blade_2.png", pos5, rect5);
    map = map_create1bis(map);
    return (map);
}

map_object_t *map_create2bis(map_object_t *map)
{
    sfIntRect rect6 = {0, 0, 75, 74};
    sfIntRect rect7 = {0, 0, 75, 74};
    sfIntRect rect8 = {0, 0, 75, 74};
    sfVector2f pos6 = {2565, 360};
    sfVector2f pos7 = {3320, 360};
    sfVector2f pos8 = {3395, 360};

    map->obstacle_6 = create_object("spikes_1.png", pos6, rect6);
    map->obstacle_7 = create_object("spikes_1.png", pos7, rect7);
    map->obstacle_8 = create_object("spikes_1.png", pos8, rect8);
    return (map);
}

map_object_t *map_create2(void)
{
    map_object_t *map = malloc(sizeof(map_object_t));
    sfIntRect rect1 = {0, 0, 75, 74};
    sfIntRect rect2 = {0, 0, 75, 74};
    sfIntRect rect3 = {0, 0, 75, 74};
    sfIntRect rect4 = {0, 0, 75, 74};
    sfIntRect rect5 = {0, 0, 75, 74};
    sfVector2f pos1 = {830, 360};
    sfVector2f pos2 = {905, 360};
    sfVector2f pos3 = {1660, 360};
    sfVector2f pos4 = {1735, 360};
    sfVector2f pos5 = {2490, 360};

    map->obstacle_1 = create_object("spikes_1.png", pos1, rect1);
    map->obstacle_2 = create_object("spikes_1.png", pos2, rect2);
    map->obstacle_3 = create_object("spikes_1.png", pos3, rect3);
    map->obstacle_4 = create_object("spikes_1.png", pos4, rect4);
    map->obstacle_5 = create_object("spikes_1.png", pos5, rect5);
    map = map_create2bis(map);
    return (map);
}