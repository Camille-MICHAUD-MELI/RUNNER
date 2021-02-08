/*
** EPITECH PROJECT, 2020
** putstr
** File description:
** putstr
*/

char my_putchar(char c);

int my_putstr(char const *str)
{
    int l = 0;

    while (str[l] != '\0') {
        my_putchar(str[l]);
        l++;
    }
    return (0);
}