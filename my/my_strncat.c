/*
** my_strncat.c for my_strncat.c in /home/juliena/rendu/Piscine-C-Jour_07/ex_01
** 
** Made by athomasjulien
** Login   <juliena@epitech.net>
** 
** Started on  Wed Oct  9 22:37:36 2013 athomasjulien
** Last update Wed Oct  9 23:18:30 2013 athomasjulien
*/

char	*my_strncat(char *dest, char *src, int nb)
{
  int	a;
  int	b;

  a = 0;
  b = my_strlen(dest);
  while (src[a] != '\0' && a < nb)
    {
      dest[a + b] = src[a];
      a = a + 1;
    }
  dest[a + b] = '\0';
  return (dest);
}
