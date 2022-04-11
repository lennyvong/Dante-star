/*
** EPITECH PROJECT, 2022
** setp_back.c
** File description:
** step_back
*/

#include "my_algo.h"

int step_back(my_algo_t *my_algo)
{
    my_algo->map_x = my_algo->stack_x_save[my_algo->i_x_save - 1];
    my_algo->map_y = my_algo->stack_y_save[my_algo->i_y_save - 1];
    my_algo->i_x_save -= 1;
    my_algo->i_y_save -= 1;
    if (my_algo->i_x_save == 0)
        return (84);
    if (my_algo->i_y_save == 0)
        return (84);
    return (0);
}
