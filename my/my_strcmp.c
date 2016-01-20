/*
** my_strcmp.c for my_strcmp.c in /home/juliena/rendu/Piscine-C-Jour_06/ex_05
** 
** Made by athomasjulien
** Login   <juliena@epitech.net>
** 
** Started on  Tue Oct  8 14:52:16 2013 athomasjulien
** Last update Thu Dec 19 13:17:32 2013 athomasjulien
*/

int	my_strcmp(char *s1, char *s2)
{
  int	a;
  int	b;

  a = 0;
  b = 0;
  while (s1[b] == s2[b] && (s1[b] || s2[b]))
    b = b + 1;
  a =  s1[b] - s2[b];
  if (a != 0)
    return (a);
  else
    return (0);
}
