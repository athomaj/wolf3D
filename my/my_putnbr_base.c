/*
** my_putnbr_base.c for my_putnbr_base.c in /home/juliena/rendu/Piscine-C-Jour_06/ex_15
** 
** Made by athomasjulien
** Login   <juliena@epitech.net>
** 
** Started on  Mon Oct 28 15:40:10 2013 athomasjulien
** Last update Thu Dec 19 13:41:44 2013 athomasjulien
*/

#include	<stdlib.h>

int		my_putnbr_base(int nb, char *base)
{
  int		nbr;
  int		len;

  if (nb < 0)
    {
      my_putchar('-');
      nb = -nb;
    }
  len = my_strlen(base);
  nbr = nb % len;
  nb = nb / len;
  if (nb > 0)
    my_putnbr_base(nb, base);
  my_putchar(base[nbr]);
}
