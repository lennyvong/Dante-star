##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##

CC	=	gcc

SRC	=	sources/main.c	\
		sources/solver.c	\
		sources/get_map.c

OBJ	=	$(SRC:.c=.o)

NAME	=	solver

CFLAGS	=	-Wall -Wextra

CPPFLAGS	= -I ./includes

LDFLAGS = -L ./lib

LDLIBS = -lmy

all:  $(NAME)

$(NAME):	$(OBJ)
	make re -C lib/
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS) $(LDLIBS)

clean:
	make clean -C lib/
	$(RM) $(OBJ)

fclean: clean
	make fclean -C lib/
	$(RM) $(NAME)

debug: CPPFLAGS += -g3
debug: re

re: fclean all

.PHONY: all clean fclean re debug