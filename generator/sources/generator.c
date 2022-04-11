/*
** EPITECH PROJECT, 2022
** generator.c
** File description:
** generator
*/

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

char **backtracking(const int height, const int width, char *mode);

int dante(int height, const int width, char *mode)
{
    srand(time(NULL));
    backtracking(height, width, mode);
}

int generator(const int ac, char const **av)
{
    if (ac == 3) {
        if (dante(atoi(av[2]), atoi(av[1]), "imperfect") == 84)
            return (84);
        return (0);
    }
    if (ac == 4 && strcmp(av[3], "perfect") == 0) {
        if (dante(atoi(av[2]), atoi(av[1]), "perfect") == 84)
            return (84);
        return (0);
    }
    return (84);
}

int main(int const ac, char const **av)
{
    if (generator(ac, av) == 84)
        return (84);
    return (0);
}
