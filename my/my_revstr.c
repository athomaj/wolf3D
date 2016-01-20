/*
** my_revstr.c for my_revstr.c in /home/juliena/rendu/Piscine-C-Jour_06
** 
** Made by athomasjulien
** Login   <juliena@epitech.net>
** 
** Started on  Mon Oct  7 14:36:11 2013 athomasjulien
** Last update Tue Nov 26 14:00:23 2013 athomasjulien
*/

char	*my_revstr(char *str)
{
  int	a;
  int	b;
  char	c;

  a = 0;
  b = my_strlen(str) - 1;
  while (a < b)
    {
      c = str[a];
      str[a] = str[b];
      str[b] = c;
      a = a + 1;
      b = b - 1;
    }
  return (str);
}
