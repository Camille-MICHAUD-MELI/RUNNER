/*
** EPITECH PROJECT, 2020
** RUNNER
** File description:
** wait_a_bit.c
*/

#include "runner.h"

void wait_a_bit(void)
{
    sfClock *clock = sfClock_create();
    sfTime time;
    float second = time.microseconds / 100000.0;
    int stop = 0;

    while (stop != 1)
    {
        time = sfClock_getElapsedTime(clock);
        if (second > 1000) {
            stop = 1;
        }
    }
}