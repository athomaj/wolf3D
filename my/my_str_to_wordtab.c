/*
** my_str_to_wordtab.c for my_str_to_wordtab.c in /home/juliena/rendu/MUL_2013_fdf
** 
** Made by athomasjulien
** Login   <juliena@epitech.net>
** 
** Started on  Sat Dec  7 23:18:31 2013 athomasjulien
** Last update Tue Dec 17 14:55:11 2013 athomasjulien
*/

#include <stdlib.h>

int	count(char *str, char delim)
{
  int	i;
  int	a;

  a = 0;
  i = 0;
  while (str[i])
    {
      if (str[i] == delim)
	a = a + 1;
      i = i + 1;
    }
  return (a + 1);
}

char	**my_str_to_wordtab(char *str, char delim)
{
  char	**dest;
  int	i;
  int	a;
  int	b;

  a = -1;
  i = 0;
  if ((dest = malloc(sizeof(char *) * count(str, delim))) == NULL)
    return (NULL);
  while (str[++a] != '\0')
    {
      while (str[a] == delim)
	a = a + 1;
      b = 0;
      if ((dest[i] = malloc(sizeof(char) * my_strlen(str))) == NULL)
	return (NULL);
      while (str[a] != delim && str[a] != '\0' && str[a] != '\n')
	dest[i][b++] = str[a++];
      dest[i++][b] = '\0';
    }
  dest[i] = NULL;
  return (dest);
}
