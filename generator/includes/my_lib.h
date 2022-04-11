/*
** EPITECH PROJECT, 2022
** my_lib.h
** File description:
** my_lib
*/

#ifndef MY_LIB_H_
    #define MY_LIB_H_

char **my_str_to_word_array(char *str, char p_break);
int f_get_rand(const int min, const int max);
void my_array_free(char **array, int height);
void add_tab_int(int *tab, int value);
int rm_tab_int_last(int *tab);
#endif /* !MY_LIB_H_ */
