##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##

SRC_GENERATOR	=	generator

SRC_SOLVER	=	solver

all:
	make -C $(SRC_GENERATOR)
	make -C $(SRC_SOLVER)

clean:
	make clean -C $(SRC_GENERATOR)
	make clean -C $(SRC_SOLVER)

fclean: clean
	make fclean -C $(SRC_GENERATOR)
	make fclean -C $(SRC_SOLVER)

re: fclean all

.PHONY: all clean fclean re
