/*
** EPITECH PROJECT, 2020
** RUNNER
** File description:
** runner.h
*/

#ifndef RUNNER_H
#define RUNNER_H

#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include <SFML/Audio.h>
#include <SFML/Audio/Music.h>
#include <SFML/Audio/SoundBuffer.h>
#include <SFML/Graphics/RenderWindow.h>

typedef struct object
{
    sfTexture *texture;
    sfSprite *sprite;
    sfVector2f vector;
    sfIntRect rectnl;
    sfFloatRect frect;
    int nb;
    int jump;
} object_t;

typedef struct map_object
{
    object_t *obstacle_1;
    object_t *obstacle_2;
    object_t *obstacle_3;
    object_t *obstacle_4;
    object_t *obstacle_5;
    object_t *obstacle_6;
    object_t *obstacle_7;
    object_t *obstacle_8;
} map_object_t;

typedef struct back_ground
{
    object_t *fond_fond;
    object_t *fond_fond1;
    object_t *fond;
    object_t *avant;
    object_t *avant1;
    object_t *fond1;
    object_t *shadow;
    object_t *player;
    object_t *win;
    object_t *loose;
    object_t *medals;
    object_t *died;
    sfMusic *music;
    sfFont *font;
    sfText *text;
    sfText *texte;
    char **av;
    int ac;
    int score;
    int stop;
    int i;
} back_ground_t;

object_t *create_object(const char *filepath, sfVector2f pos, sfIntRect rect);
object_t *create_player(void);
object_t *create_obstacle(sfVector2f pos, sfIntRect rect);
object_t *create_shadow(void);
back_ground_t *create_back(void);
back_ground_t *manage_back(void);
map_object_t *map_create1(void);
sfMusic *music_start(void);
sfRenderWindow *creat_window(void);
char my_putchar(char c);
int my_putstr(char const *str);
void moove_all(back_ground_t **back, sfClock **clock, map_object_t **map,
sfRenderWindow **window);
void moove_ddr(back_ground_t ***back);
void windowloop(sfRenderWindow *window, back_ground_t *back, map_object_t *m);
void display_windows(sfRenderWindow **window, back_ground_t **b,
map_object_t **map, sfMusic **music);
void wait_a_bit(void);
void moove_rect(sfIntRect *rect, int offset, int max_value);
void moove_dr(back_ground_t ***back);
void moove_av(back_ground_t ***back);
void moove_obstacle(map_object_t ***object);
void event_handle(sfRenderWindow **window, sfEvent *eventt, back_ground_t
**back, map_object_t **map);
void handle_jump(back_ground_t ***back);
void does_it_touch(sfRenderWindow **window, back_ground_t **map,
map_object_t **object);
void moove_pos(back_ground_t ***back, sfRenderWindow ***window);
void moove_obstaclebis(map_object_t ****ot);
void win(sfRenderWindow ***window, back_ground_t ***b, map_object_t ***mapp,
sfMusic ***music);
void does_it_touchbis(sfRenderWindow ***window, back_ground_t ***m,
map_object_t ***o);
void is_it_win(sfRenderWindow ***window, back_ground_t ***m,
map_object_t ***o);
void death_sound(back_ground_t ***back, sfRenderWindow ***window);
map_object_t *map_create2(void);
map_object_t *map_create3(void);
map_object_t *map_create4(void);
void text_manage(back_ground_t *back);
int my_strlen(char const *str);
char *my_revstr(char *str);
char *my_intto_str(int nb);
void display_text(back_ground_t ***back, sfRenderWindow ***window);
char *my_strcat(char *dest, char const *src);
int my_strlen(char const *str);
int main(int ac, char **av);

#endif