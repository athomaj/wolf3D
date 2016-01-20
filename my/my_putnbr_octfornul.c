/*
** my_putnbr_octfornul.c for my_putnbr_octfornul.c in /home/juliena/rendu/PSU_2013_my_printf/my
** 
** Made by athomasjulien
** Login   <juliena@epitech.net>
** 
** Started on  Fri Nov 15 16:59:20 2013 athomasjulien
** Last update Sun Nov 17 23:11:11 2013 athomasjulien
*/

#include	<stdlib.h>

int		my_putnbr_oct(int nbr, char *base)
{
  int		len;
  int		pos;
  char		*swap;
  int		a;
  int		b;

  if (nbr == 0)
    my_putchar('0');
  if (nbr < 0)
    {
      my_putchar('-');
      nbr = -nbr;
    }
  swap = malloc(nbr);
  len = my_strlen(base);
  a = 0;
  while (nbr > 0)
    {
      pos = nbr % len;
      b = base[pos];
      swap[a] = b;
      nbr = nbr / len;
      a = a + 1;
    }
  norm_nbr_oct(a, swap);
}

int		norm_nbr_oct(int a, char *swap)
{
  int		b;

  b = a;
  my_putchar('\\');
  while (b != 3)
    {
      my_putchar('0');
      b = b + 1;
    }
  while (a >= 0)
    {
      my_putchar(swap[a]);
      a = a - 1;
    }
  free(swap);
}
