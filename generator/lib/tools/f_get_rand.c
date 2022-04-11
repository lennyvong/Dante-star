/*
** EPITECH PROJECT, 2022
** f_get_rand
** File description:
** f_get_rand
*/

#include <stdlib.h>

int f_get_rand(const int min, const int max)
{
    if (min == max)
        return (min);
    return (min + (rand() % (max - min + 1)));
}
