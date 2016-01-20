/*
** my_getnbr.c for my_getnbr.c in /home/juliena/rendu/Piscine-C-Jour_04
** 
** Made by athomasjulien
** Login   <juliena@epitech.net>
** 
** Started on  Thu Oct 10 15:19:45 2013 athomasjulien
** Last update Thu Dec 19 13:37:10 2013 athomasjulien
*/

int	my_getnbr(char *str)
{
  int	a;
  int	b;
  int	c;
  int	d;
  int	e;

  a = 0;
  b = -1;
  c = 0;
  d = 1;
  while (str[++b] == 43 || str[b] == 45)
    if (str[b] == 45)
      d = d * -1;
  e = b - 1;
  while (str[b++] >= '0' && str[b] <= '9')
    c = c + 1;
  c = c - 1;
  while (str[++e] != '\0' && str[e] >= '0' && str[e] <= '9')
    {
      a = ((str[e] - 48) * my_power_it(10, c) + a);
      c = c - 1;
    }
  a = a * d;
  return (a);
}
