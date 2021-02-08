/*
** EPITECH PROJECT, 2020
** RUNNER
** File description:
** manage_back.c
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
    player->jump = 0;
    sfSprite_setTextureRect(player->sprite, player->rectnl);
    sfSprite_setPosition(player->sprite, player->vector);
    return (player);
}

object_t *create_shadow(void)
{
    sfVector2f nb = {104, 430};
    sfIntRect pos = {0, 0, 120, 35};
    object_t *shadow = malloc(sizeof(object_t));

    shadow->texture = sfTexture_createFromFile("shadow.png", NULL);
    shadow->sprite = sfSprite_create();
    sfSprite_setTexture(shadow->sprite, shadow->texture, sfTrue);
    shadow->vector = nb;
    shadow->rectnl = pos;
    sfSprite_setTextureRect(shadow->sprite, shadow->rectnl);
    sfSprite_setPosition(shadow->sprite, shadow->vector);
    return (shadow);
}

back_ground_t *create_back(void)
{
    back_ground_t *back = malloc(sizeof(back_ground_t));
    sfIntRect rect = {0, 0, 800, 470};
    sfVector2f position = {0, 0};
    sfIntRect rect2 = {0, 0, 960, 267};
    sfVector2f pos2 = {0, 152};
    sfIntRect rect3 = {0, 0, 820, 800};
    sfVector2f pos3 = {0, 0};
    sfIntRect rectav = {0, 0, 0, 470};
    sfVector2f posav = {800, 0};
    sfIntRect rectf = {0, 0, 0, 267};
    sfVector2f posf = {960, 152};
    sfIntRect last = {0, 0, 0, 800};
    sfVector2f lastt = {820, 0};

    back->fond_fond = create_object("last_plan.png", pos3, rect3);
    back->fond_fond1 = create_object("last_plan.png", lastt, last);
    back->fond = create_object("secondplanbasetest.png", pos2, rect2);
    back->fond1 = create_object("secondplanbasetest.png", posf, rectf);
    back->avant = create_object("first_plan.png", position, rect);
    back->avant1 = create_object("first_plan.png", posav, rectav);
    return (back);
}

back_ground_t *win_loose(back_ground_t *back)
{
    sfIntRect win1 = {0, 0, 800, 600};
    sfVector2f win2 = {0, 0};
    sfVector2f loose1 = {0, 0};
    sfIntRect loose2 = {0, 0, 800, 600};
    sfIntRect medals = {0, 0, 100, 100};
    sfVector2f madalsv = {100, 200};
    sfIntRect died = {0, 0, 800, 112};
    sfVector2f diedd = {0, 250};

    back->win = create_object("victoryaot.png", win2, win1);
    back->loose = create_object("loose_aot.jpg", loose1, loose2);
    back->medals = create_object("medals.png", madalsv, medals);
    back->died = create_object("youdied.png", diedd, died);
    back->i = 1;
    return (back);
}

back_ground_t *manage_back(void)
{
    back_ground_t *back = create_back();

    back->player = create_player();
    back->shadow = create_shadow();
    back->stop = 1;
    back->score = 0;
    back = win_loose(back);
    text_manage(back);
    return (back);
}