/*
** EPITECH PROJECT, 2020
** RUNNER
** File description:
** destroy_object.c
*/

#include "runner.h"

void destroy_object(object_t *obj)
{
    sfSprite_destroy(obj->sprite);
    sfTexture_destroy(obj->texture);
    free(&obj);
}