/*
** func_calc_nbr_next.c for func_calc_nbr_next.c in /home/juliena/rendu/PSU_2013_my_printf
** 
** Made by athomasjulien
** Login   <juliena@epitech.net>
** 
** Started on  Fri Nov 15 15:25:37 2013 athomasjulien
** Last update Sun Nov 17 22:44:06 2013 athomasjulien
*/

#include	<stdarg.h>

int		nbr_base_hex_caps(va_list arg)
{
  unsigned int	a;
  int		b;

  a = va_arg(arg, unsigned int);
  b = my_putnbr_base_unsigned(a, "0123456789ABCDEF");
  return (b);
}
