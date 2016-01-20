/*
** my_getnbr_base.c for my_getnbr_base.c in /home/juliena/rendu/Piscine-C-Jour_06/ex_16
** 
** Made by athomasjulien
** Login   <juliena@epitech.net>
** 
** Started on  Mon Oct 28 18:03:09 2013 athomasjulien
** Last update Mon Nov 25 18:27:17 2013 athomasjulien
*/

int	my_exep2(char *str, char *base)
{
  int	a;
  int	c;
  int	b;
  int	d;

  a = 0;
  c = my_strlen(base);
  d = 0;
  b = 1;
  while (c != 0)
    {
      while (base[a] != base[b] && base[b] != '\0')
	b = b + 1;
      if (base[a] == base[b])
	return (0);
      d = d + 1;
      b = 1 + d;
      a = a + 1;
      c = c - 1;
    }
}

int     my_exep(char *str, char *base)
{
  int	a;
  int	b;
  int	c;

  a = 0;
  c = my_strlen(str);
  if ((str[0] == '\0' && base[0] == '\0')
      || str[0] == '\0' || base[0] == '\0')
    return (0);
  while (c != 0)
    {
      b = 0;
      while (str[a] != base[b] && base[b] != 0)
	b = b + 1;
      if (str[a] != base[b])
	return (0);
      a = a + 1;
      c = c - 1;
    }
  if (my_exep2(str, base) == '\0')
    return (0);
}

int	my_getnbr_base(char *str, char *base)
{
  int	a;
  int	b;
  int	c;
  int	d;
  int	e;

  d = my_strlen(str);
  b = 0;
  e = 0;
  if (my_exep(str, base) == '\0')
    return (0);
  while (d != 0)
    {
      c = 0;
      while (str[b] != base[c])
	c = c + 1;
      e = e * my_strlen(base);
      e = e + c;
      b = b + 1;
      d = d - 1;
    }
  return (e);
}
