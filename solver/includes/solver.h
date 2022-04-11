/*
** EPITECH PROJECT, 2022
** B-CPE-200-PAR-2-1-dante-lenny.vongphouthone
** File description:
** solver
*/

#ifndef SOLVER_H_
    #define SOLVER_H_

typedef struct solver_s {
    char **map;
    int **pos;
    int pos_x;
    int pos_y;
    int x;
    int y;
}solver_t;

void solving(solver_t *solver);

#endif /* !SOLVER_H_ */
