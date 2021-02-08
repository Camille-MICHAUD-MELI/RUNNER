/*
** EPITECH PROJECT, 2020
** RUNNER
** File description:
** music_start.c
*/

#include "runner.h"

sfMusic *music_start(void)
{
    sfMusic *music = sfMusic_createFromFile("music.ogg");

    sfMusic_play(music);
    sfMusic_setLoop(music, 1000);
    return (music);
}