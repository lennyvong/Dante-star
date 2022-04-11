/*
** EPITECH PROJECT, 2022
** binary_tree_algo.c
** File description:
** binary_tree_alo
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "my_algo.h"
#include "my_lib.h"
#include "my_macro.h"
#include "my_possibility.h"
#include "my_carve.h"

void set_struct(my_algo_t *my_algo, const int height, const int width);

void fill_map(const int height, const int width, my_algo_t *my_algo)
{
    for (int y = 0; y < height; y += 1) {
        my_algo->map[y] = malloc(sizeof(char) * width + 1);
        for (int x = 0; x != width; x += 1)
            my_algo->map[y][x] = 'X';
        my_algo->map[y][width] = '\0';
    }
    my_algo->map[0][0] = '*';
    if (height % 2 == 0 && width % 2 == 0) {
        my_algo->map[0][1] = '*';
        my_algo->map[1][1] = '*';
    }
    if (height % 2 == 1 && width % 2 == 0)
        my_algo->map[0][1] = '*';
    if (height % 2 == 0 && width % 2 == 1)
        my_algo->map[1][0] = '*';
    return;
}

int count_possibility(my_algo_t *my_algo)
{
    int i = 0;

    for (; my_algo->possibility[i] != -1; i += 1);
    return (i);
}

void imperfect_maze(my_algo_t *my_algo, const int height, const int width)
{
    for (int y = 1; y < height - 1; y += 1)
        my_algo->map[y][f_get_rand(width / 3, width - 1)] = '*';
    return;
}

void display_maze(const int height, const int width, char *mode,
my_algo_t *my_algo)
{
    if (strcmp(mode, "imperfect") == 0)
        imperfect_maze(my_algo, height, width);
    for (int i = 0; i != height - 1; i += 1)
        printf("%s\n", my_algo->map[i]);
    printf("%s", my_algo->map[height - 1]);
    return;
}

int backtracking(const int height, const int width, char *mode)
{
    my_algo_t my_algo;

    set_struct(&my_algo, height, width);
    fill_map(height, width, &my_algo);
    while (carve_map(&my_algo) != 84);
    display_maze(height, width, mode, &my_algo);
    return (0);
}
