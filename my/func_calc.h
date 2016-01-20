/*
** func-calcbis.h for func-calcbis.h in /home/juliena/rendu/PSU_2013_my_printf
** 
** Made by athomasjulien
** Login   <juliena@epitech.net>
** 
** Started on  Thu Nov 14 16:50:49 2013 athomasjulien
** Last update Sun Nov 17 22:26:50 2013 athomasjulien
*/

#ifndef FUNC_CALCBIS_H_
# define FUNC_CALCBIS_H_
#include <stdarg.h>

int	charac(va_list);
int	nbr_dec(va_list);
int	string(va_list);
int	point(va_list);
int	nbr_base_hex(va_list);
int	nbr_base_bin(va_list);
int	string2(va_list);
int	nbr_base_oct(va_list);
int	nbr_dec_unsigned(va_list);
int     nbr_base_hex_caps(va_list);
int	nbr_point(va_list);
int	flag_neg(va_list);
int	flag_pos(va_list);
int	flag_space(va_list);
int	my_nbrlen(int);
int	my_power_it(int, int);
void	my_putchar(char);
int	my_putnbr_base(int, char *);
int     my_putnbr_base_unsigned(unsigned long int, char *);
int	my_put_nbr(int);
int     my_putnbr_oct(int, char *);
int	my_putnbr_unsigned(unsigned int);
void	my_putstr(char *);
int	my_strlen(char *);
int	diff_function(const char *);
int     myfunc_tab(int, va_list);
int	my_printf(const char *, ...);

#endif /* !FUNC_CALCBIS_H_ */
