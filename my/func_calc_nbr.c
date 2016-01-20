/*
** func_calc_nbr.c for func_calc_nbr.c in /home/juliena/rendu/PSU_2013_my_printf
** 
** Made by athomasjulien
** Login   <juliena@epitech.net>
** 
** Started on  Thu Nov 14 17:29:11 2013 athomasjulien
** Last update Sun Nov 24 22:56:11 2013 athomasjulien
*/
#include	<stdlib.h>
#include	<stdarg.h>
#include	"func_calc.h"

int		nbr_dec(va_list arg)
{
  int		a;

  a = va_arg(arg, int);
  my_put_nbr(a);
  return (my_nbrlen(a));
}

int		nbr_base_hex(va_list arg)
{
  unsigned int	a;
  int		b;

  a = va_arg(arg, unsigned int);
  b = my_putnbr_base_unsigned(a, "0123456789abcdef");
  return (b);
}

int		nbr_base_bin(va_list arg)
{
  int		a;
  int		b;

  a = va_arg(arg, int);
  b = my_putnbr_base(a, "01");
  return (b);
}

int		nbr_base_oct(va_list arg)
{
  unsigned int	a;
  int		b;

  a = va_arg(arg, unsigned int);
  b = my_putnbr_base_unsigned(a, "01234567");
  return (b);
}

int		nbr_dec_unsigned(va_list arg)
{
  unsigned int	a;

  a = va_arg(arg, unsigned int);
  my_putnbr_unsigned(a);
  return (my_nbrlen(a));
}
