/*
** EPITECH PROJECT, 2022
** B-CPE-200-PAR-2-1-dante-lenny.vongphouthone
** File description:
** main
*/

#include <stdlib.h>
#include "solver.h"

char **get_map(char *map_name, char **map);

void free_all(solver_t *solver)
{
    for (int i = 0; solver->map[i] != NULL; i++)
        free(solver->map[i]);
    for (int i = 0; i < solver->pos_y; i++)
        free(solver->pos[i]);
    free(solver->map);
    free(solver->pos);
}

int main(int ac, char **av)
{
    solver_t solver;
    solver.map = NULL;
    if (ac != 2)
        return (84);
    solver.map = get_map(av[1], solver.map);
    if (solver.map == NULL)
        return (84);
    solving(&solver);
    free_all(&solver);
    return (0);
}
