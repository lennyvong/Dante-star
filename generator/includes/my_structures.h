/*
** EPITECH PROJECT, 2022
** my_structures.h
** File description:
** my_structures
*/

#ifndef MY_STRUCTURES_H_
    #define MY_STRUCTURES_H_

typedef struct map_s {
    int **map;
    int y;
    int x;
    int end;
    int nb_sources;
} map_t;
#endif /* !MY_STRUCTURES_H_ */
