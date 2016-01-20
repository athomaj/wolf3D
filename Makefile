##
## Makefile for Makefile in /home/juliena/rendu/MUL_2013_wolf3d
## 
## Made by athomasjulien
## Login   <juliena@epitech.net>
## 
## Started on  Thu Dec 19 12:58:53 2013 athomasjulien
## Last update Sun Jan 12 22:23:27 2014 athomasjulien
##

SRC=		wolf3d.c		\
		my_gestion.c		\
		my_pixel_put_to_image.c	\
		my_calc_wolf.c

OBJ=		$(SRC:.c=.o)

NAME=		wolf3d

CFLAGS=		-Wall -Werror -Wextra -I./minilibx

all:		subdirectory $(NAME)

subdirectory:	
		$(MAKE) -C my

$(NAME):	$(OBJ)
		gcc $(OBJ) -lmy -L./ -L./minilibx -L/usr/lib64 -lmlx -L/usr/lib64/X11 -lXext -lX11 -lm -o $(NAME)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

fcleanbis:	clean
		$(MAKE) clean
		rm -f $(NAME)
		$(MAKE) fclean

re:		fclean all
