/*
** EPITECH PROJECT, 2020
** RUNNER
** File description:
** death_sound.c
*/

#include "runner.h"

void death_sound(back_ground_t ***back, sfRenderWindow ***window)
{
    back_ground_t *ba = **back;

    ba->music = sfMusic_createFromFile("death_sound.ogg");
    sfRenderWindow_drawSprite(**window, ba->died->sprite, NULL);
    if (ba->i == 1) {
        sfMusic_play(ba->music);
        ba->i = 0;
    }
    **back = ba;
}