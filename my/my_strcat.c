/*
** my_strcat.c for my_strcat.c in /home/juliena/rendu/Piscine-C-Jour_07/ex_01
** 
** Made by athomasjulien
** Login   <juliena@epitech.net>
** 
** Started on  Wed Oct  9 15:23:20 2013 athomasjulien
** Last update Sun Dec  1 22:10:24 2013 athomasjulien
*/

#include <stdlib.h>

char	*my_strcat(char *dest, char *src)
{
  int	a;
  int	b;
  char	*new_dest;

  new_dest = malloc(sizeof(char) * (my_strlen(dest) + my_strlen(src) + 1));
  my_strcpy(new_dest, dest);
  a = 0;
  b = my_strlen(dest);
  while (src[a] != '\0')
    {
      new_dest[a + b] = src[a];
      a = a + 1;
    }
  new_dest[a + b] = '\0';
  return (new_dest);
}
