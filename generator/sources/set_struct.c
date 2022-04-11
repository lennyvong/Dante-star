/*
** EPITECH PROJECT, 2022
** set_struct
** File description:
** set_struct
*/

#include <stdlib.h>
#include "my_algo.h"

void set_depart(my_algo_t *my_algo)
{
    if (my_algo->height % 2 == 1)
        my_algo->map_y = 0;
    else
        my_algo->map_y = 1;
    if (my_algo->width % 2 == 1)
        my_algo->map_x = 0;
    else
        my_algo->map_x = 1;
}

void set_struct(my_algo_t *my_algo, const int height, const int width)
{
    my_algo->map = malloc(sizeof(char *) * height + 2);;
    my_algo->height = height;
    my_algo->width = width;
    my_algo->road_chose = 0;
    my_algo->possibility = malloc(sizeof(int) * 5);
    my_algo->possibility[0] = -1;
    my_algo->stack = malloc(sizeof(int) * (height * width) + 1);
    my_algo->stack_x_save = malloc(sizeof(int) * (height * width) + 1);
    my_algo->stack_y_save = malloc(sizeof(int) * (height * width) + 1);
    my_algo->stack_y_save[0] = -1;
    my_algo->stack_x_save[0] = -1;
    my_algo->stack[0] = -1;
    my_algo->i_x_save = 0;
    my_algo->i_x_to_save = 0;
    my_algo->i_y_save = 0;
    my_algo->i_y_to_save = 0;
    set_depart(my_algo);
}
