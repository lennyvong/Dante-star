/*
** EPITECH PROJECT, 2022
** my_algo.h
** File description:
** my_algo
*/

#ifndef MY_ALGO_H_
    #define MY_ALGO_H_

typedef struct my_algo_s {
    char **map;
    int width;
    int height;
    int road_chose;
    int *possibility;
    int *stack;
    int map_y;
    int map_x;
    int i_y_to_save;
    int i_x_to_save;
    int *stack_y_save;
    int *stack_x_save;
    int i_y_save;
    int i_x_save;
} my_algo_t;

int current_stack(int *stack);
int step_back(my_algo_t *my_algo);
void set_struct(my_algo_t *my_algo, const int height, const int width);
#endif /* !MY_ALGO_H_ */
