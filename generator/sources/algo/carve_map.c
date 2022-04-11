/*
** EPITECH PROJECT, 2022
** carve_map.c
** File description:
** carve_map
*/

#include "my_algo.h"
#include "my_macro.h"
#include "my_lib.h"

int check_possibility(my_algo_t *my_algo);
int count_possibility(my_algo_t *my_algo);

static void carve_wall(my_algo_t *my_algo, int direction)
{
    if (direction == EAST) {
        for (int i = 1; i != 3; i += 1)
            my_algo->map[my_algo->map_y][my_algo->map_x + i] = '*';
        my_algo->map_x += 2;
    }
    if (direction == WEST) {
        for (int i = 1; i != 3; i += 1)
            my_algo->map[my_algo->map_y][my_algo->map_x - i] = '*';
        my_algo->map_x -= 2;
    }
    if (direction == SUD) {
        for (int i = 1; i != 3; i += 1)
            my_algo->map[my_algo->map_y + i][my_algo->map_x] = '*';
        my_algo->map_y += 2;
    }
    if (direction == NORTH) {
        for (int i = 1; i != 3; i += 1)
            my_algo->map[my_algo->map_y - i][my_algo->map_x] = '*';
        my_algo->map_y -= 2;
    }
}

int carve_map(my_algo_t *my_algo)
{
    if (check_possibility(my_algo) == 84)
        return (84);
    carve_wall(my_algo, my_algo->possibility
    [f_get_rand(0, count_possibility(my_algo) - 1)]);
    return (0);
}
