/*
** my_strncmp.c for my_strncmp.c in /home/juliena/rendu/Piscine-C-Jour_06/ex_06
** 
** Made by athomasjulien
** Login   <juliena@epitech.net>
** 
** Started on  Tue Oct  8 15:52:28 2013 athomasjulien
** Last update Thu Dec 19 13:14:46 2013 athomasjulien
*/

int	my_strncmp(char *s1, char *s2, int n)
{
  int	a;
  int	b;

  a = 0;
  b = 0;
  while (s1[b] == s2[b] && (s1[b] || s2[b]))
    b = b + 1;
  a = s1[b] - s2[b];
  if (a != 0 && b < n)
    return (a);
  else
    return (0);
}
