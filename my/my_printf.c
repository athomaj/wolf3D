/*
** my_printfbis.c for my_printfbis.c in /home/juliena/rendu/PSU_2013_my_printf
** 
** Made by athomasjulien
** Login   <juliena@epitech.net>
** 
** Started on  Thu Nov 14 16:30:48 2013 athomasjulien
** Last update Thu Dec 19 13:45:41 2013 athomasjulien
*/

#include        <stdio.h>
#include        <stdarg.h>
#include        "func_calc.h"

int		diff_function(const char *format)
{
  char		type[11] = "dcspxXbSiou";
  int		a;

  a = 0;
  while (a != 11)
    {
      if (type[a] == format[0])
        return (a);
      a = a + 1;
    }
  return (11);
}

int		myfunc_tab(int nbr, va_list arg)
{
  int		(*fptr[11])(va_list);
  int		a;

  fptr[0] = &nbr_dec;
  fptr[1] = &charac;
  fptr[2] = &string;
  fptr[3] = &point;
  fptr[4] = &nbr_base_hex;
  fptr[5] = &nbr_base_hex_caps;
  fptr[6] = &nbr_base_bin;
  fptr[7] = &string2;
  fptr[8] = &nbr_dec;
  fptr[9] = &nbr_base_oct;
  fptr[10] = &nbr_dec_unsigned;
  a = fptr[nbr](arg);
  return (a);
}

int		my_printf(const char *format, ...)
{
  va_list	arg;
  int		a;
  int		i;
  int		j;

  i = 0;
  a = 0;
  va_start(arg, format);
  while (format[0] != '\0')
    {
      if (format[0] == '%')
	{
	  format = format + 1;
	  j = myfunc_tab(diff_function(format), arg);
	  a = a + j;
	}
      else
	{
	  my_putchar(format[0]);
	  i = i + 1;
	}
      format = format + 1;
    }
  va_end(arg);
  return (a + i);
}
