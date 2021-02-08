/*
** EPITECH PROJECT, 2020
** RUNNER
** File description:
** event_handle.c
*/

#include "runner.h"

void restart_game(back_ground_t ***back, sfRenderWindow ***window)
{
    back_ground_t *save = **back;

    sfRenderWindow_close(**window);
    main(save->ac, save->av);
}

void event_handle(sfRenderWindow **window, sfEvent *e, back_ground_t **b,
map_object_t **m)
{
    sfEvent event = *e;
    back_ground_t *ba = *b;

    if (event.type == sfEvtClosed)
        sfRenderWindow_close(*window);
    if (event.type == sfEvtKeyPressed) {
        if (event.key.code == sfKeyEscape)
            sfRenderWindow_close(*window);
        if (event.key.code == sfKeyR)
            restart_game(&b, &window);
        if (event.key.code == sfKeySpace && ba->player->jump <= 1) {
            ba->player->nb = 1;
            ba->player->jump += 1;
            handle_jump(&b);
        }
    }
    *b = ba;
}