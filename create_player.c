/*
** EPITECH PROJECT, 2020
** RUNNER
** File description:
** create_player.c
*/

#include "runner.h"

object_t *create_player(void)
{
    object_t *player = malloc(sizeof(object_t));
    sfVector2f nb = {110, 350};
    sfIntRect pos = {0, 0, 96, 97};

    player->texture = sfTexture_createFromFile("spriteunited.png", NULL);
    player->sprite = sfSprite_create();
    sfSprite_setTexture(player->sprite, player->texture, sfTrue);
    player->vector = nb;
    player->rectnl = pos;
    player->nb = 0;
    sfSprite_setTextureRect(player->sprite, player->rectnl);
    sfSprite_setPosition(player->sprite, player->vector);
    return (player);
}