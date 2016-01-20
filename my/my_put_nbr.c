/*
** my_put_nbr.c for my_put_nbr.c in /home/juliena
** 
** Made by athomasjulien
** Login   <juliena@epitech.net>
** 
** Started on  Fri Oct 11 09:03:22 2013 athomasjulien
** Last update Mon Nov 18 16:00:53 2013 athomasjulien
*/

int	my_put_nbr(int nb)
{
  int	a;
  int	b;
  int	c;
  int	d;
  int	e;

  a = 0;
  c = 1;
  d = 0;
  if (nb == 0)
    my_putchar('0');
  if (nb < 0)
    {
      my_putchar('-');
      nb = -nb;
    }
  while (c <= nb)
    {
      c = c * 10;
      d = d + 1;
    }
  d = d - 1;
  e = my_power_it(10, d);
  the_norm(d, e, nb);
}

int	the_norm(int d, int e, int nb)
{
  int	b;
  int	a;

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
