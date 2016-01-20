/*
** my_strdup.c for my_strdup.c in /home/juliena/rendu/Piscine-C-Jour_08/ex_01
** 
** Made by athomasjulien
** Login   <juliena@epitech.net>
** 
** Started on  Wed Oct  9 08:50:43 2013 athomasjulien
** Last update Sun Dec  1 22:04:33 2013 athomasjulien
*/

#include <stdlib.h>

char	*my_strdup(char *src)
{
  char	*dest;

  dest = malloc(sizeof(char) * (my_strlen(src) + 1));
  if (dest == NULL)
    return (0);
  my_strcpy(dest, src);
  return (dest);
}
