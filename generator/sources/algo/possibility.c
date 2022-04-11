/*
** EPITECH PROJECT, 2022
** first_line.c
** File description:
** first_line
*/

#include <stdio.h>
#include "my_algo.h"
#include "my_macro.h"
#include "my_lib.h"

int step_back(my_algo_t *my_algo);
int count_possibility(my_algo_t *my_algo);

static void get_possibility_impair(my_algo_t *my_algo)
{
    if (my_algo->map_x >= 2 && my_algo->map[my_algo->map_y]
    [my_algo->map_x - 2] != '*' && my_algo->map[my_algo->map_y]
    [my_algo->map_x - 1] == 'X')
        add_tab_int(my_algo->possibility, WEST);
    if (my_algo->map_x <= my_algo->width - 2 && my_algo->map[my_algo->map_y]
    [my_algo->map_x + 2] != '*' && my_algo->map[my_algo->map_y]
    [my_algo->map_x + 1] == 'X')
        add_tab_int(my_algo->possibility, EAST);
    if (my_algo->map_y >= 2 && my_algo->map[my_algo->map_y - 2]
    [my_algo->map_x] != '*' && my_algo->map[my_algo->map_y - 1]
    [my_algo->map_x] == 'X')
        add_tab_int(my_algo->possibility, NORTH);
    if (my_algo->map_y <= my_algo->height - 2 &&
    my_algo->map[my_algo->map_y + 2][my_algo->map_x] != '*' &&
    my_algo->map[my_algo->map_y + 1][my_algo->map_x] == 'X')
        add_tab_int(my_algo->possibility, SUD);
}

static void get_possibility_pair(my_algo_t *my_algo)
{
    if (my_algo->map_x >= 3 && my_algo->map[my_algo->map_y]
    [my_algo->map_x - 2] != '*' && my_algo->map[my_algo->map_y]
    [my_algo->map_x - 1] == 'X')
        add_tab_int(my_algo->possibility, WEST);
    if (my_algo->map_x <= (my_algo->width - 1) - 2 &&
    my_algo->map[my_algo->map_y]
    [my_algo->map_x + 2] != '*' && my_algo->map[my_algo->map_y]
    [my_algo->map_x + 1] == 'X')
        add_tab_int(my_algo->possibility, EAST);
    if (my_algo->map_y >= 3 && my_algo->map[my_algo->map_y - 2]
    [my_algo->map_x] != '*' && my_algo->map[my_algo->map_y - 1]
    [my_algo->map_x] == 'X')
        add_tab_int(my_algo->possibility, NORTH);
    if (my_algo->map_y <= (my_algo->height - 1) - 2 &&
    my_algo->map[my_algo->map_y + 2][my_algo->map_x] != '*' &&
    my_algo->map[my_algo->map_y + 1][my_algo->map_x] == 'X')
        add_tab_int(my_algo->possibility, SUD);
}

static void save_position(my_algo_t *my_algo)
{
    my_algo->stack_x_save[my_algo->i_x_save] = my_algo->map_x;
    my_algo->stack_y_save[my_algo->i_y_save] = my_algo->map_y;
    my_algo->i_x_save += 1;
    my_algo->i_y_save += 1;
    return;
}

static void reset(my_algo_t *my_algo)
{
    my_algo->possibility[0] = -1;
    my_algo->possibility[1] = 0;
    my_algo->possibility[2] = 0;
    my_algo->possibility[3] = 0;
    my_algo->possibility[4] = 0;
}

int check_possibility(my_algo_t *my_algo)
{
    int count = 0;

    reset(my_algo);
    if (my_algo->height % 2 == 1)
        get_possibility_impair(my_algo);
    else
        get_possibility_pair(my_algo);
    count = count_possibility(my_algo);
    if (count > 1)
        save_position(my_algo);
    if (count == 0) {
        if (step_back(my_algo) == 84)
            return (84);
        if (check_possibility(my_algo) == 84)
            return (84);
    }
    return (0);
}
