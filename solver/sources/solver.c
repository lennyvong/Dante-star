/*
** EPITECH PROJECT, 2022
** B-CPE-200-PAR-2-1-dante-lenny.vongphouthone
** File description:
** solver
*/

#include <stdio.h>
#include <stdlib.h>
#include "solver.h"

int case_occupied(solver_t *solver)
{
    solver->y = 0;
    solver->x = 0;

    if (solver->map[0][0] == 'X')
        return (1);
    for (; solver->map[0][solver->x] != '\0'; solver->x++);
    for (; solver->map[solver->y] != NULL; solver->y++);
    solver->pos = malloc(sizeof(int *) * (solver->y * solver->x * 2));
    solver->pos_y = 0;
    solver->pos_x = 0;
    if (solver->map[solver->y - 1][solver->x - 1] == 'X')
        return (1);
    return (0);
}

void save_pos_back(solver_t *solver, int y, int x)
{
    solver->pos[solver->pos_y] = malloc(sizeof(int) * 2);
    solver->pos[solver->pos_y][0] = y;
    solver->pos[solver->pos_y][1] = x;
    solver->pos_y++;
    solver->map[y][x] = 'P';
}

int solve_case(solver_t *solver, int y, int x)
{
    if (y == solver->y - 1 && x == solver->x)
        return (1);
    if (y >= 0 && x >= 0 && y < solver->y && x < solver->x
    && solver->map[y][x] == '*') {
        solver->map[y][x] = 'o';
        if (solve_case(solver, y, x + 1))
            return (1);
        if (solve_case(solver, y + 1, x))
            return (1);
        if (solve_case(solver, y, x - 1))
            return (1);
        if (solve_case(solver, y - 1, x))
            return (1);
        save_pos_back(solver, y, x);
        return (0);
    }
    return (0);
}

void remove_back(solver_t *solver)
{
    for (int i = 0; i != solver->pos_y; i++)
        solver->map[solver->pos[i][0]][solver->pos[i][1]] = '*';
}

void solving(solver_t *solver)
{
    if (case_occupied(solver) == 1) {
        printf("no solution found");
        return;
    }
    if (solve_case(solver, 0, 0) == 0) {
        printf("no solution found");
        return;
    }
    remove_back(solver);
    for (int i = 0; solver->map[i + 1] != NULL; i++)
        printf("%s\n", solver->map[i]);
    printf("%s", solver->map[solver->y - 1]);
}
