/*
** EPITECH PROJECT, 2020
** RUNNER
** File description:
** main.c
*/

#include "runner.h"

map_object_t *handle_next(char **av, int ac)
{
    map_object_t *map = malloc(sizeof(map_object_t));

    if (av[1][7] == '3') {
        map = map_create3();
        return (map);
    }
    if (av[1][7] == '4') {
        map = map_create4();
        return (map);
    } else {
        map = NULL;
        return (map);
    }
}

map_object_t *map_manage(char **av, int ac)
{
    map_object_t *map = malloc(sizeof(map_object_t));

    if (av[1][7] == '1') {
        map = map_create1();
        return (map);
    }
    if (av[1][7] == '2') {
        map = map_create2();
        return (map);
    }
    map = handle_next(av, ac);
}

void display_h(void)
{
    my_putstr("Finite runner created with CSFML by Camille MICHAUD-MELI.\n");
    my_putstr("\nUSAGE\n   ./my_runner map.txt\n\nOPTIONS\n  -h");
    my_putstr("           print the usage and quit.\n\n");
    my_putstr("USER INTERACTIONS\n SPACE_KEY      jump.\n SPACE_KEY_AGAIN");
    my_putstr("      double jump\n");
    my_putstr(" R_KEY       restart game\n");
}

int check_h(int ac, char **av)
{
    if (ac != 2) {
        my_putstr("./my_runner: bad arguments: 0 ");
        my_putstr("given but 1 is required\nretry with -h");
        return (1);
    }
    if (av[1][0] == '-' && av[1][1] == 'h') {
        display_h();
        return (1);
    }
    if (av[1][0] != 'm' && av[1][1] != 'a' && av[1][2] != 'p')
        return (1);
    if (av[1][3] != '/' && av[1][4] != 'm' && av[1][5] != 'a')
        return (1);
    if (av[1][6] != 'p' && av[1][7] < '1' && av[1][7] > '4')
        return (1);
    else
        return (0);
}

int main(int ac, char **av)
{
    int nb = 0;
    map_object_t *map = map_manage(av, ac);
    back_ground_t *back = manage_back();
    sfRenderWindow *window = creat_window();

    back->av = av;
    back->ac = ac;
    nb = check_h(ac, av);
    if (nb == 1)
        return (84);
    if (nb == 2)
        return (1);
    if (map == NULL) {
        return (84);
        my_putstr("wrong map\n");
    }
    windowloop(window, back, map);
    return (0);
}