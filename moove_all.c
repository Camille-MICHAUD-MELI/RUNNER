/*
** EPITECH PROJECT, 2020
** RUNNER
** File description:
** moove_all.c
*/

#include "runner.h"

void moove_all(back_ground_t **back, sfClock **clock, map_object_t **m,
sfRenderWindow **window)
{
    back_ground_t *temp = *back;
    sfIntRect tempp = temp->player->rectnl;

    temp->score += 1;
    if (temp->stop == 1 && temp->stop != 3 && temp->player->nb != 4) {
        moove_av(&back);
        moove_dr(&back);
        moove_obstacle(&m);
    }
    if (temp->player->nb == 0)
        moove_rect(&tempp, 96, 960);
    if (temp->player->nb == 1 || temp->player->nb == 2)
        handle_jump(&back);
    if (temp->player->nb == 4) {
        moove_pos(&back, &window);
        moove_rect(&tempp, 96, 960);
    }
    sfClock_restart(*clock);
    temp->player->rectnl = tempp;
    *back = temp;
}