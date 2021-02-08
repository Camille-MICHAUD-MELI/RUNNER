/*
** EPITECH PROJECT, 2020
** putchar
** File description:
** putchar
*/

#include <unistd.h>

char my_putchar(char c)
{
    write(1, &c, 1);
}