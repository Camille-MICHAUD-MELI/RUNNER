/*
** EPITECH PROJECT, 2020
** RUNNER
** File description:
** text_manage.c
*/

#include "runner.h"

void text_manage(back_ground_t *back)
{
    sfVector2f pos = {160, 520};
    sfVector2f pose = {20, 520};

    back->text = sfText_create();
    back->texte = sfText_create();
    back->font = sfFont_createFromFile("arial-black.ttf");
    sfText_setFont(back->text, back->font);
    sfText_setPosition(back->text, pos);
    sfText_setString(back->text, "TEST");
    sfText_setColor(back->text, sfWhite);
    sfText_setCharacterSize(back->text, 30);
    sfText_setFont(back->texte, back->font);
    sfText_setPosition(back->texte, pose);
    sfText_setString(back->texte, "SCORE :");
    sfText_setColor(back->texte, sfWhite);
    sfText_setCharacterSize(back->texte, 30);
}

void display_text(back_ground_t ***back, sfRenderWindow ***window)
{
    back_ground_t *ba = **back;

    char *str = my_intto_str(ba->score);
    char *base = "SCORE :";
    sfText_setString(ba->text, str);
    sfRenderWindow_drawText(**window, ba->texte, NULL);
    sfRenderWindow_drawText(**window, ba->text, NULL);
    **back = ba;
}