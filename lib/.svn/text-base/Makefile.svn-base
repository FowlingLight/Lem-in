##
## Makefile for printf in /home/b3nja13/Documents/printf
## 
## Made by benjamin horiot
## Login   <horiot_b@epitech.net>
## 
## Started on  Wed Nov 14 11:25:10 2012 benjamin horiot
## Last update Fri Apr 26 11:38:31 2013 benjamin horiot
##

SRC	=	base.c \
		lib.c \
		convfct.c \
		convfct2.c \
		convfct3.c \
		convfct4.c \
		getnbr.c \
		lib.c \
		my_getnbr.c \
		my_printf.c \
		scientist.c \
		search.c \
		error.c \
		my_strcpy.c \
		my_strcmp.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

CFLAGS	=	-W -Wall -Wextra -Werror

all:		$(NAME)

$(NAME):	$(OBJ)
		ar rc $(NAME) $(OBJ)

clean:
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all