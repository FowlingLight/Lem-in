##
## Makefile for lem_in in /home/b3nja13/Documents/svn/prog_elem/lem_in
## 
## Made by benjamin horiot
## Login   <horiot_b@epitech.net>
## 
## Started on  Mon Mar 18 15:07:10 2013 benjamin horiot
## Last update Sun Apr 28 14:44:23 2013 benjamin horiot
##

SRC	=	init.c \
		get_all.c \
		get_graph.c \
		get_graph2.c \
		aff.c \
		lem_in.c \
		lem_in2.c \
		check_file.c \
		checks.c \
		skips.c \
		utils.c \
		go_ants.c \
		my_free.c

NAME	=	lem_in

OBJ	=	$(SRC:.c=.o)

DIRLIB	=	./lib

LIBCMP	=	-L./lib -lmy

CFLAGS	=	-W -Wall -Wextra -Werror


all:		$(NAME)

$(NAME):	$(OBJ)
		$(MAKE) -C $(DIRLIB)
		gcc -o $(NAME) $(OBJ) $(LIBCMP)

clean:
		$(MAKE) -C $(DIRLIB) clean
		rm -f $(OBJ)

fclean:		clean
		$(MAKE) -C $(DIRLIB) fclean
		rm -f $(NAME)

re:		fclean all