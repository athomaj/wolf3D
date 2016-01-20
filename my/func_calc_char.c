/*
** func-calcbis.c for func_calcbis.c in /home/juliena/rendu/PSU_2013_my_printf
** 
** Made by athomasjulien
** Login   <juliena@epitech.net>
** 
** Started on  Thu Nov 14 16:32:47 2013 athomasjulien
** Last update Sun Nov 17 23:02:46 2013 athomasjulien
*/

#include	<stdarg.h>
#include	<stdio.h>

int		charac(va_list arg)
{
  char		a;

  a = va_arg(arg, int);
  my_putchar(a);
  return (1);
}

int		string(va_list arg)
{
  char		*str;
  char		i;

  str = va_arg(arg, char *);
  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
  return (my_strlen(str));
}

int		point(va_list arg)
{
  void		*a;
  int		b;

  a = va_arg(arg, void *);
  if (a == NULL)
    {
      my_putstr("(nil)");
      return (0);
    }
  my_putstr("0x");
  b = my_putnbr_base_unsigned(a, "0123456789abcdef");
  return (b + 2);
}

int		string2(va_list arg)
{
  char		*str;
  int		i;

  str = va_arg(arg, char *);
  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] < 32 || str[i] >= 127)
	my_putnbr_oct(str[i], "01234567");
      else
	my_putchar(str[i]);
      i = i + 1;
   }
  return (my_strlen(str));
}
