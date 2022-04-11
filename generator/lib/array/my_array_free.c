/*
** EPITECH PROJECT, 2022
** my_array_free.c
** File description:
** my_array_free
*/

#include <stdlib.h>

void my_array_free(char **array, int height)
{
    if (height == -1) {
        for (int i = 0; array[i] != NULL; i += 1)
            free(array[i]);
    } else  {
        for (int i = 0; i != height; i += 1)
            free(array[i]);
    }
    return;
}
