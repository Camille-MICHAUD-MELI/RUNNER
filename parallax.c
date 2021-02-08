/*
** EPITECH PROJECT, 2020
** RUNNER
** File description:
** parallax.c
*/

#include "runner.h"

sfRenderWindow *creat_window(void)
{
    sfRenderWindow *window;
    sfVideoMode video_mode;
    video_mode.width = 800;
    video_mode.height = 600;
    video_mode.bitsPerPixel = 60;
    window = sfRenderWindow_create(video_mode, "My_Runner",
    sfDefaultStyle, NULL);
    sfRenderWindow_setFramerateLimit(window, 55);
    return (window);
}

void moove_av(back_ground_t ***back)
{
    back_ground_t *temp = **back;

    if (temp->avant->rectnl.width != 0) {
        temp->avant->rectnl.left += 10;
        temp->avant->rectnl.width -= 10;
        temp->avant1->vector.x -= 10;
        temp->avant1->rectnl.width += 10;
    } else {
        temp->avant->rectnl.left = 0;
        temp->avant->rectnl.width = 800;
        temp->avant1->vector.x = 800;
        temp->avant1->rectnl.width = 0;
    }
    sfSprite_setTextureRect(temp->avant->sprite, temp->avant->rectnl);
    sfSprite_setTextureRect(temp->avant1->sprite, temp->avant1->rectnl);
    sfSprite_setPosition(temp->avant1->sprite, temp->avant1->vector);
    **back = temp;
}

void moove_dr(back_ground_t ***back)
{
    back_ground_t *temp = **back;

    if (temp->fond->rectnl.width != 0) {
        temp->fond->rectnl.left += 1;
        temp->fond->rectnl.width -= 1;
        temp->fond1->vector.x -= 1;
        temp->fond1->rectnl.width += 1;
    } else {
        temp->fond->rectnl.left = 0;
        temp->fond->rectnl.width = 960;
        temp->fond1->vector.x = 960;
        temp->fond1->rectnl.width = 0;
    }
    sfSprite_setTextureRect(temp->fond->sprite, temp->fond->rectnl);
    sfSprite_setTextureRect(temp->fond1->sprite, temp->fond1->rectnl);
    sfSprite_setPosition(temp->fond1->sprite, temp->fond1->vector);
    **back = temp;
}

void windowloop(sfRenderWindow *window, back_ground_t *back, map_object_t *m)
{
    sfEvent event;
    sfMusic *musicc = music_start();
    sfClock *clock = sfClock_create();
    sfTime time;
    float second;

    while (sfRenderWindow_isOpen(window))
    {
        time = sfClock_getElapsedTime(clock);
        second = time.microseconds / 100000.0;
        if (second > 0.3 && back->stop != 0) {
            moove_all(&back, &clock, &m, &window);
            does_it_touch(&window, &back, &m);
        }
        while (sfRenderWindow_pollEvent(window, &event))
            event_handle(&window, &event, &back, &m);
        display_windows(&window, &back, &m, &musicc);
    }
    sfMusic_destroy(musicc);
}