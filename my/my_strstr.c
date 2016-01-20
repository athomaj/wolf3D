/*
** my_strstr.c for my_strstr.c in /home/juliena/rendu/Piscine-C-Jour_06/ex_04
** 
** Made by athomasjulien
** Login   <juliena@epitech.net>
** 
** Started on  Mon Oct  7 17:21:37 2013 athomasjulien
** Last update Thu Dec 19 13:14:14 2013 athomasjulien
*/

char	*my_strstr(char *str, char *to_find)
{
  int	a;
  int	b;
  int	c;
  int	d;

  a = 0;
  b = 0;
  c = my_strlen(to_find);
  while (str[a])
  {
    if (str[a] == to_find[b] && b == 0)
      {
	b = b + 1;
	d = a;
      }
    else if (str[a] == to_find[b] && b >0)
      b = b + 1;
    else
      b = 0;
    if (b == c)
      return (&str[d]);
    a = a + 1;
  }
}
