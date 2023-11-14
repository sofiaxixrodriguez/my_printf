##
## EPITECH PROJECT, 2023
## MYPRINTF Makefile
## File description:
## mkfl for myprintf
##

SRC =	myprintf.c	\
	printf_flags_1.c	\
	printf_flags_2.c	\
	printf_flags_3.c	\

OBJ   =	$(SRC:.c=.o)

NAME	= libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C lib/my
	cp lib/libmy.a .
	ar -rsc libmy.a $(OBJ)

clean:
	make -C lib/my clean
	rm -rf $(OBJ)

fclean:	clean
	rm -rf $(NAME)

re: fclean all
