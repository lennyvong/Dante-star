##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##

SRC	=	tools/tools.c	\
		array/my_str_to_word_array.c	\
		array/put_str_to_word_array.c	\
		array/my_array_len.c	\
		array/my_arraycpy.c	\
		array/my_free_array.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

CPPFLAGS = -Wall -Wextra

CPPFLAGS = -I../includes

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re : fclean all

.PHONY:	all clean fclean re
