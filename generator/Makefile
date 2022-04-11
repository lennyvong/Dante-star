##
## EPITECH PROJECT, 2022
## makefile
## File description:
## Makefile
##

CC	=	gcc

SRC	=	sources/generator.c	\
		sources/set_struct.c	\
		sources/algo/binary_tree_algo.c	\
		sources/algo/step_back.c	\
		sources/algo/carve_map.c	\
		sources/algo/possibility.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	generator

DEBUG_NAME	=	generator_debug

CFLAGS	=	-Wall -Wextra

CPPFLAGS	= -I ./includes

LDFLAGS = -L ./lib

LDLIBS = -lmy

all:  $(NAME)

$(NAME):	$(OBJ)
	make re -C lib/
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS) $(LDLIBS) $(CPPFLAGS)

debug_all: $(DEBUG_NAME)

$(DEBUG_NAME):	$(OBJ)
	make re -C lib/
	$(CC) -o $(DEBUG_NAME) $(OBJ) $(LDFLAGS) $(LDLIBS) -g3

clean:
	make clean -C lib/
	$(RM) $(OBJ)

fclean: clean
	make fclean -C lib/
	$(RM) $(NAME)
	$(RM) $(DEBUG_NAME)

debug: make fclean debug_all

re: fclean all

.PHONY: all clean fclean re debug
