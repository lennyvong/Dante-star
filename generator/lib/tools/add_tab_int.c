/*
** EPITECH PROJECT, 2022
** add_tab_int.c
** File description:
** add_tab_int
*/

int rm_tab_int_last(int *tab)
{
    int i = 0;

    for (; tab[i] != -1; i += 1);
    if (i > 1) {
        tab[i - 1] = -1;
        return (0);
    }
    return (84);
}

void add_tab_int(int *tab, int value)
{
    int i = 0;

    for (; tab[i] != -1; i += 1);
    tab[i] = value;
    tab[i + 1] = -1;
    return;
}
