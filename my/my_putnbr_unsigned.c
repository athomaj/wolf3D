/*
** my_putnbr_unsigned.c for my_putnbr_unsigned.c in /home/juliena/rendu/PSU_2013_my_printf/my
** 
** Made by athomasjulien
** Login   <juliena@epitech.net>
** 
** Started on  Fri Nov 15 14:35:35 2013 athomasjulien
** Last update Sun Nov 17 22:13:54 2013 athomasjulien
*/

int		my_putnbr_unsigned(unsigned int nb)
{
  int		a;
  int		b;
  long long	c;
  int		d;
  unsigned int	e;

  a = 0;
  c = 1;
  d = 0;
  if (nb == 0)
    my_putchar('0');
  if (nb < 0)
    my_putstr("error : negative number");
  while (c <= nb)
    {
      c = c * 10;
      d = d + 1;
    }
  d = d - 1;
  e = my_power_it_unsigned(10, d);
  the_norm_unsigned(d, e, nb);
}

int		the_norm_unsigned(int d, unsigned int e, unsigned int nb)
{
  unsigned int	b;
  int		a;

  a = 0;
  while (d + 1 != 0)
    {
      b = nb / e;
      a = b % 10;
      e = e / 10;
      my_putchar(a + 48);
      d = d - 1;
    }
}
