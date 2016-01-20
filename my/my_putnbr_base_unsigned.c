/*
** my_putnbr_base_unsigned.c for my_putnbr_base_unsigned.c in /home/juliena/rendu/PSU_2013_my_printf/my
** 
** Made by athomasjulien
** Login   <juliena@epitech.net>
** 
** Started on  Fri Nov 15 13:21:13 2013 athomasjulien
** Last update Sun Nov 17 23:09:52 2013 athomasjulien
*/

#include	<stdlib.h>

int		my_putnbr_base_unsigned(unsigned long int nbr, char *base)
{
  int		len;
  int		pos;
  char		*swap;
  int		a;
  int		b;

  if (nbr == 0)
    my_putchar('0');
  if (nbr < 0)
    my_putstr("error : negative number");
  swap = malloc(sizeof(unsigned long int));
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
  norm_nbr_base_unsigned(a, swap);
  return (a);
}

int		norm_nbr_base_unsigned(int a, char *swap)
{
  while (a >= 0)
    {
      my_putchar(swap[a]);
      a = a - 1;
    }
  free(swap);
}
