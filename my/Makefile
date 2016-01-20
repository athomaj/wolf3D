##
## Makefile for Makefile in /home/juliena/rendu/Piscine-C-Jour_11
## 
## Made by athomasjulien
## Login   <juliena@epitech.net>
## 
## Started on  Mon Oct 21 09:43:19 2013 athomasjulien
## Last update Thu Dec 19 13:55:05 2013 athomasjulien
##

SRC=	my_putchar.c		\
	my_getnbr_base.c	\
	my_isneg.c		\
	my_put_nbr.c		\
	my_strdup.c		\
	my_swap.c		\
	my_putstr.c		\
	my_strlen.c		\
	my_getnbr.c		\
	my_power_rec.c		\
	my_strcpy.c		\
	my_strncpy.c		\
	my_revstr.c		\
	my_strstr.c		\
	my_strcmp.c		\
	my_strncmp.c		\
	my_str_isnum.c		\
	my_strcat.c		\
	my_strncat.c		\
	my_power_it.c		\
	my_printf.c		\
	func_calc_char.c	\
	func_calc_nbr.c		\
	func_calc_nbr_next.c	\
	my_nbrlen.c		\
	my_power_it_unsigned.c	\
	my_putnbr_base_unsigned.c	\
	my_putnbr_octfornul.c	\
	my_putnbr_unsigned.c	\
	my_putnbr_base.c	\
	my_str_to_wordtab.c	\

NAME	= libmy.a

OBJ	= $(SRC:.c=.o)

RM	= rm -f

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	cp libmy.a ../

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
